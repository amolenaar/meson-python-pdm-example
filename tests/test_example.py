from meson_python_pdm_example.extension import hello

def test_hello():
    assert hello() == "Hello World"
