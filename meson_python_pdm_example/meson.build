# SPDX-FileCopyrightText: 2024 Arjan Molenaar
#
# SPDX-License-Identifier: Apache-2.0

python.install_sources(
  [
    '__init__.py'
  ],
  pure : false,
  subdir : 'meson_python_pdm_example'
)

extension = python.extension_module(
  '_extension',
  sources: ['extension.c'],
  dependencies: [python_dep],
  install: true,
  subdir : 'meson_python_pdm_example'
)
