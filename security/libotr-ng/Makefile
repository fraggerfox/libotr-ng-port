# $FreeBSD$

PORTNAME=	libotr-ng
PORTVERSION=	0.0.0
CATEGORIES=	security
MASTER_SITES=	https://github.com/otrv4/libotr-ng

MAINTAINER=	santhosh.raju@gmail.com
COMMENT=	Library providing implementation of OTR with support for \
		version 4.

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

GNU_CONFIGURE=	yes

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libgoldilocks.so:security/libgoldilocks \
		libgpg-error.so:security/libgpg-error \
		libsodium.so:security/libsodium

USES=		autoreconf gmake gnome libtool pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	otrv4
GH_PROJECT=	libotr-ng
GH_TAGNAME=	97a6306

INSTALL_TARGET?=	install-strip

.include <bsd.port.mk>
