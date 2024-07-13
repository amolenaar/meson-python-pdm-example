<!--
SPDX-FileCopyrightText: 2024 Arjan Molenaar

SPDX-License-Identifier: Apache-2.0
-->

# Meson + Python + PDM

This is a small example project that shows you how you can set up Meson and Meson-Python with PDM and have a some pythonic development workflow.

## Meson-style

The classic approach with Meson is to create a virtual environment and use meson to build and test:

```bash
python -m venv .venv
source .venv/bin/activate
pip install pytest
meson setup _build
meson test -C _build
```