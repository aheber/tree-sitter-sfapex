from setuptools import setup, Extension
import os

ext = Extension(
    name="tree_sitter_sfapex._binding",
    sources=[
        "bindings/python/tree_sitter_sfapex/binding.c",
        "apex/src/parser.c",
        "soql/src/parser.c",
        "sosl/src/parser.c",
        "sflog/src/parser.c",
    ],
    include_dirs=["apex/src"],
    extra_compile_args=["-std=c11"] if os.name != "nt" else [],
    define_macros=[("PY_SSIZE_T_CLEAN", None)],
)

setup(
    name="tree-sitter-sfapex",
    ext_modules=[ext],
    packages=["tree_sitter_sfapex"],
    package_dir={"tree_sitter_sfapex": "bindings/python/tree_sitter_sfapex"},
    package_data={"tree_sitter_sfapex": ["*.pyi", "py.typed"]},
)
