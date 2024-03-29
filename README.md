MongoDB Plugins for Dovecot  
========================

The goal of this project is the creation of a storage plugin for Dovecot, which enables the storage of emails in MongoDB. The focus is currently on a hybrid model where the emails are stored in MongoDB, while all other metadata (lists, index, cache) are stored in a file system that is located locally on the Dovecot server or on shared volumes.

The Plugin is based on 0.0.21 of dovecot-ceph-plugin. Thanks!

Currently this is work in progress!!!

### Disclaimer

This project is under active development and not in any kind of release state. Be aware it is possible and very likely that APIs, interfaces and or the data format change at any time before a first release.

The code is in a tested state, but is NOT production ready. Although the code is still flagged as experimental, we encourage users to try it out for non-production clusters and non-critical data sets and report their experience, findings and issues.

It is planned to move all or parts of this code into other git repositories to move these parts later into other open source community projects like Ceph and Dovecot.

## Compile and install the Plugins

To compile the plugin you need a configured or installed Dovecot >= 2.3.7

### Checking out the source

You can clone from github with

	git clone https://github.com/jrse/dovecot-mongo-plugin.git

Ceph contains git submodules that need to be checked out with

	git submodule update --init --recursive


The build requires that you have the following software/packages installed:

    libjansson-devel version >= 2.9
    libmongoc
    dovecot-devel (dovecot header)

If you are using CentOS make sure you also have the following package installed:

    yum install redhat-rpm-config

### Standard installation in /usr/local

    ./autogen.sh
    ./configure
    make
    sudo make install

### User installation in ~/dovecot

    ./autogen.sh
    ./configure --prefix=/home/user/dovecot 
    make install

### Configured source tree in ~/workspace/core

    ./autogen.sh
    ./configure --with-dovecot=/home/user/workspace/core
    make install

## Thanks

<table border="0">
  <tr>
    <td><img src="https://upload.wikimedia.org/wikipedia/commons/2/2e/Telekom_Logo_2013.svg"</td>
    <td>This plugin borrows heavily from dovecot-ceph-plugin <a href="https://github.com/ceph-dovecot/dovecot-ceph-plugin">Dovecot-ceph-plgin</a> which development was sponsored by Deutsche Telekom. We would like to take this opportunity to thank Deutsche Telekom.</td>
  </tr>
  <tr>
    <td><img src="https://upload.wikimedia.org/wikipedia/commons/3/37/Dovecot-logo.png"</td>
    <td>This plugin borrows heavily from <a href="https://github.com/dovecot/core/">Dovecot</a> itself particularly for the automatic detection of dovecont-config (see m4/dovecot.m4). The lib-dict and lib-storage were also used as reference material for understanding the Dovecot dictionary and storage API.</td>
  </tr>
  <tr>
    <td><img src="https://www.tallence.com/fileadmin/user_upload/content/Mailing/tallence_logo-email.png"</td>
    <td><a href="https://www.tallence.com/">Tallence</a> carried out the initial development.</td>
  </tr>
  <tr>
    <td><img src="https://avatars1.githubusercontent.com/u/20288092?v=4&s=100"</td>
    <td>Wido den Hollander from <a href="http://www.42on.com">42on.com</a> for all the help and ideas.</td>
  </tr>
</table>
