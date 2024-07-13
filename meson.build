# SPDX-FileCopyrightText: 2024 Arjan Molenaar
#
# SPDX-License-Identifier: Apache-2.0

project('meson-python-pdm-example', 'c',
  version : '0.1',
  meson_version : '>= 1.1',
  default_options : ['warning_level=3']
)

cc = meson.get_compiler('c')

pymod = import('python')
python = pymod.find_installation(get_option('python'), pure: false)

if python.language_version().version_compare('< 3.9')
  error('Requires Python >= 3.9')
endif

python_dep = python.dependency()

subdir('meson_python_pdm_example')
subdir('tests')
