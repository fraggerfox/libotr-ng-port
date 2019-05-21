libotr-ng-port
==================

FreeBSD Ports script for libotr-ng.

You can find libotr-ng [here][1]

NOTE: This port is not yet available in the FreeBSD Ports tree.

NOTE: This library does not have release yet.

Installation
------------

Copy `security/libotr-ng` folder to `/usr/ports` directory.

NOTE: If your ports directory is different from above, copy to the respective
place.

Usage
-----

Once you have copied the folder, install it as you would do for any port.

`$ cd /usr/ports/security/libotr-ng`<br>
`$ make install clean`

For a list of dependencies for the build check [here][2]

Credits
-------

* The libotr-ng is developed and maintained by the [OTRv4 Team][3]
* Thanks to `@ppaeps` for a machine to do and test the port development and
  testing out / fixing the port.
* This work has been partially sponsored by [CAD][4]

License
-------

BSD 2-clause. See LICENSE.

[1]: https://github.com/otrv4/libotr-ng
[2]: https://github.com/otrv4/libotr-ng#build
[3]: https://github.com/orgs/otrv4/people
[4]: https://autonomia.digital/
