# -*- mode: ruby -*-
# vi: set ft=ruby :
#
# GCI2018, Fedora Project

Vagrant.configure("2") do |config|
	config.vm.define "precise" do |web|
		config.vm.box = "hashicorp/precise64"
		config.vm.box_url = "https://vagrantcloud.com/hashicorp/precise64"
	end

	config.vm.define "web" do |web|
		config.vm.box = "debian/jessie64"
		config.vm.box_url = "https://vagrantcloud.com/debian/jessie64"
	end
end
