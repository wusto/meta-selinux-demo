FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "\
    file://modules.conf \
    file://selinux-config \
    file://0001-Adding-policy-for-alice.patch \
"

# enable monolithic and disable quiet builds
POLICY_MONOLITHIC = "y"
POLICY_QUIET ?= "n"

DEFAULT_ENFORCING ??= "permissive"

do_install:append() {
    tar --no-same-owner -cpf - -C "${UNPACKDIR}"/selinux-config . \
            | tar --no-same-owner -xpf - -C "${D}${sysconfdir}"/selinux
}

