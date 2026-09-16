
inherit selinux-image
inherit extrausers

IMAGE_FEATURES += "ssh-server-openssh"

LICENSE = "MIT"

EXTRA_USERS_PARAMS = 'usermod -p '\$6\$EzhZ54QHPs7mqKh.\$ZWk8xYxZYtoKQp1pSN73WOUumXu.2D/8U23ZH3brEUnkM1l.CNgKlL9t8kh4UJgO2ei2fDoMnAHUfs7fuDwEQ1' root;'

IMAGE_INSTALL += "\
        alice-application \
        packagegroup-core-selinux \
"
