DESCRIPTION = "Mail plugin for Today"
SECTION = "opie/today"
PRIORITY = "optional"
LICENSE = "GPL"
DEPENDS = "opie-today opie-mailapplet"
RDEPENDS_${PN} = "opie-today opie-mailapplet"
APPNAME = "todaymailplugin"


S = "${WORKDIR}/mail"

inherit opie
