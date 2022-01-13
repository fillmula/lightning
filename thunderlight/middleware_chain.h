#pragma once

#include <Python.h>


typedef struct {
    PyObject_HEAD
    PyObject *inner;
    PyObject *next;
} OuterNext;

typedef struct {
    PyObject_HEAD
    PyObject *outer;
    PyObject *inner;
} ChainedMiddleware;

typedef struct {
    PyObject_HEAD
    OuterNext *outer_next;
    PyObject *ctx;
} OuterNextIterator;

typedef struct {
    PyObject_HEAD
    ChainedMiddleware *chained_middleware;
    PyObject *ctx;
    PyObject *next;
} ChainedMiddlewareIterator;

static PyTypeObject ChainedMiddlewareIteratorType;
static PyTypeObject ChainedMiddlewareType;
static PyTypeObject OuterNextIteratorType;
static PyTypeObject OuterNextType;

PyObject *ChainedMiddleware_build(PyObject *list);
