#!/bin/sh
#
# This script uses a few child scripts to build X and then package it up.
# It assumes that all the needed child scripts are in the same directory that
# it lives in.  It takes three parameters, one is the directory containing the
# packing lists for the tarballs, the second is the directory that we can use
# for our scratch work, and the third is the directory to stick all the
# tarballs in.  We also expect CVSROOT to be set to a working CVS repo with
# the ports tree in it, although we only need read-only access.

# usage info
#
usage() {
	echo "$0 <work dir> <tarball dir>"
	echo
	echo "Where <work dir> is the name of the scratch directory we can do"
	echo " our work under.  Note that we toast the scratch directory at the"
	echo " beginning."
	exit 1
}

# check our command line
if [ $# -ne 2 ]; then
	usage
fi

# setup our directory variables
#	note the generate_plists.sh script can be used to populate $plist_dir
home_dir=`dirname $0`
plist_dir=${home_dir}/plists/`uname -m`
work_dir=$1
tarball_dir=$2

# setup the scratch directory
[ -r ${work_dir} ] && rm -rf ${work_dir}
if ! mkdir -p ${work_dir}; then
	echo "Could not create ${work_dir}!"
	echo
	usage
fi
mkdir ${work_dir}/scripts
cp $home_dir/* ${work_dir}/scripts/
mkdir ${work_dir}/tmp

# build X
if ! ${work_dir}/scripts/build_x.sh ${work_dir}/tmp; then
	exit 1
fi

# now package it up into tarballs
if ! ${work_dir}/scripts/generate_tarballs.sh \
		 ${work_dir}/tmp/usr/X11R6 ${plist_dir} ${tarball_dir}; then
	exit 1
fi
