# meta-selinux-demo
meta layer for SELinux demo

# Steps to build
* Create bitbake-setup-env (https://docs.yoctoproject.org/bitbake/2.18/bitbake-user-manual/bitbake-user-manual-environment-setup.html)
```
$ python3 -m venv --clear ./bitbake-setup-venv
$ . ./bitbake-setup-venv/bin/activate
$ pip install bitbake-setup
```
* Setup bitbake and download sources
```
bitbake-setup init --non-interactive <THIS-DIR>/bitbake-setup.conf.json selinux-demo machine/qemux86-64
```
* Build the image
```
bitbake core-image-selinux-demo
```

# Steps to execute
* Execute qemu
```
runqemu snapshot nographic
```
* Execute alice
```
echo "hello" > /tmp/hello.txt
runcon system_u:system_r:alice_t /usr/bin/alice
ausearch -m avc -c alice | grep avc
```
* Enjoy the violations ;)
