# $FreeBSD$

PORTNAME=	libotr-ng
DISTVERSION=	g20190621
CATEGORIES=	security
MASTER_SITES=	https://github.com/otrv4/libotr-ng/

MAINTAINER=	santhosh.raju@gmail.com
COMMENT=	Library providing implementation of OTR with support for \
		version 4

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libgoldilocks.so:security/libgoldilocks \
		libgpg-error.so:security/libgpg-error \
		libotr.so:security/libotr \
		libsodium.so:security/libsodium

USES=		autoreconf gmake gnome libtool pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	otrv4
GH_PROJECT=	libotr-ng
GH_TAGNAME=	8531765

# This is needed for libotr to be detected correctly
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--with-libotr-prefix=${LOCALBASE}/lib \
		--with-libotr-inc-prefix=${LOCALBASE}/include

INSTALL_TARGET?=	install-strip

.include <bsd.port.mk>
