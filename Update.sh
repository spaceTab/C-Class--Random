#! /bin/bash

#Script for updating both packages and system upgrades

sudo dnf clean all -y ;

sudo dnf check-update ;

sudo dnf install -y ;

sudo dnf upgrade -y ;

sudo dnf distro-sync ;

sudo dnf system-upgrade download --refresh --releaseever=28 ;


sudo dnf fixfiles onboot;   #when dealing with SELinux being labeled improperly. This helps fix

sudo dnf autoremove ;

sudo dnf system-upgrade reboot ;
