<!--
SPDX-FileCopyrightText: 2024 Arjan Molenaar

SPDX-License-Identifier: Apache-2.0
-->

# Meson + Python + PDM

[![build](https://github.com/amolenaar/meson-python-pdm-example/actions/workflows/build.yml/badge.svg)](https://github.com/amolenaar/meson-python-pdm-example/actions/workflows/build.yml)

This is a small example project that shows you how you can set up
[Meson](https://mesonbuild.com/) and
[Meson-Python](https://meson-python.readthedocs.io) with
[PDM](https://pdm-project.org) and have a some pythonic development workflow.

Why this combo? Meson is good in building native code: C, C++, Rust. There's a whole lot of languages supported. As long as the language has a bridge to Python, it can be used to write native extensions.
PDM is a package and dependency manager. If you're used to tools like Poetry and Hatch, you do not feel happy
managing your project with pip.
Meson-Python is the glue that makes Meson usable from a Python ecosystem.

PDM can be used to install all requirements needed for building and testing. PDM will make virtual environment and install all dependencies there.

```bash
pdm install
pdm run pytest
```

This is a simple flow, and familiar to anyone who's ever user Poetry.
