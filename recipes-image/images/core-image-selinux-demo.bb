
inherit selinux-image

IMAGE_FEATURES += "ssh-server-openssh empty-root-password"

LICENSE = "MIT"

IMAGE_INSTALL += "\
        alice-application \
        packagegroup-core-selinux \
"
