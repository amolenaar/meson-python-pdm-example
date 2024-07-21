# SPDX-FileCopyrightText: 2024 Arjan Molenaar
# SPDX-License-Identifier: Apache-2.0

from meson_python_pdm_example.extension import hello

def test_hello():
    assert hello() == "Hello World"
