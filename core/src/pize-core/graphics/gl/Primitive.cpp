#ifndef PIZE_CORE_GRAPHICS_GL_PRIMITIVE
#define PIZE_CORE_GRAPHICS_GL_PRIMITIVE

#include "glad/glad.h"

enum Primitive{

    POINTS         = GL_POINTS        ,
    LINES          = GL_LINES         ,
    LINE_STRIP     = GL_LINE_STRIP    ,
    LINE_LOOP      = GL_LINE_LOOP     ,
    POLYGON        = GL_POLYGON       ,
    QUADS          = GL_QUADS         ,
    QUAD_STRIP     = GL_QUAD_STRIP    ,
    TRIANGLES      = GL_TRIANGLES     ,
    TRIANGLE_STRIP = GL_TRIANGLE_STRIP,
    TRIANGLE_FAN   = GL_TRIANGLE_FAN

};

#endif