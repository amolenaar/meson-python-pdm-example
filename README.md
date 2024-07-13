<!--
SPDX-FileCopyrightText: 2024 Arjan Molenaar

SPDX-License-Identifier: Apache-2.0
-->

# Meson + Python + PDM

This is a small example project that shows you how you can set up
[Meson](https://mesonbuild.com/) and
[Meson-Python](https://meson-python.readthedocs.io) with
[PDM](https://pdm-project.org) and have a some pythonic development workflow.

Why this combo? Meson is good in building native code: C, C++, Rust. There's a whole lot of languages supported. As long as the language has a bridge to Python, it can be used to write native extensions.
PDM is a package and dependency manager. If you're used to tools like Poetry and Hatch, you do not feel happy
managing your project with pip.
Meson-Python is the glue that makes Meson usable from a Python ecosystem.


## Meson-style

The classic approach with Meson is to create a virtual environment and use meson to build and test:

```bash
python -m venv .meson-venv
source .meson-venv/bin/activate
pip install pytest
meson setup _build
meson test -C _build
```

## PDM

PDM can be used to install all requirements needed for building and testing. PDM will make virtual environment and install all dependencies there.

NB. Run this in a clean venv, not the one created for Meson previously.

```bash
pdm install
pdm run pytest
```

This is a simple flow, and familiar to anyone who's ever user Poetry.


