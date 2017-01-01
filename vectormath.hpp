
// ================================================================================================
// -*- C++ -*-
// File: vectormath/vectormath.hpp
// Author: Guilherme R. Lampert
// Created on: 30/12/16
// Brief: This header exposes the Sony Vectormath library types and functions into the global scope.
// ================================================================================================

#ifndef VECTORMATH_HPP
#define VECTORMATH_HPP

#if (!defined(VECTORMATH_DEBUG) && (defined(DEBUG) || defined(_DEBUG)))
    #define VECTORMATH_DEBUG 1
#endif // DEBUG || _DEBUG

// Sony's library includes:
#if (defined(__SSE__) && !defined(VECTORMATH_FORCE_SCALAR_MODE))
    #include "sse/vectormath.hpp"
    using namespace Vectormath::SSE;
    #define VECTORMATH_MODE_SCALAR 0
    #define VECTORMATH_MODE_SSE    1
#else // !SSE
    #include "scalar/vectormath.hpp"
    using namespace Vectormath::Scalar;
    #define VECTORMATH_MODE_SCALAR 1
    #define VECTORMATH_MODE_SSE    0
#endif // Vectormath mode selection

#include "vec2d.hpp"  // - Extended 2D vector and point classes; not aligned and always in scalar floats mode.
#include "common.hpp" // - Miscellaneous helper functions.
using namespace Vectormath;

#endif // VECTORMATH_HPP
