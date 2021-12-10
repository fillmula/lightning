"""setup.py"""
from pathlib import Path
from setuptools import setup, find_packages

# The text of the README file
README = (Path(__file__).parent / "README.md").read_text()

setup(
    name='lightning',
    version='0.1.0',
    description=('A Python HTTP Server.'),
    long_description=README,
    long_description_content_type='text/markdown',
    author='Victor Teo',
    author_email='victor.teo@fillmula.com',
    license='MIT',
    packages=find_packages(exclude=('tests')),
    package_data={'lightning': ['py.typed']},
    zip_safe=False,
    url='https://github.com/fillmula/lightning',
    include_package_data=True,
    python_requires='>=3.10',
    classifiers=[
        "Programming Language :: Python :: 3.10"
    ],
    install_requires=[
        'python-multipart==0.0.5'
    ],
)
