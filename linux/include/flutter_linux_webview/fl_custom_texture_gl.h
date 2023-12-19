// Copyright (c) 2023 ACCESS CO., LTD. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of ACCESS CO., LTD. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef LINUX_INCLUDE_FLUTTER_LINUX_WEBVIEW_FL_CUSTOM_TEXTURE_GL_H_
#define LINUX_INCLUDE_FLUTTER_LINUX_WEBVIEW_FL_CUSTOM_TEXTURE_GL_H_

#include <GL/gl.h>
#include <flutter_linux/flutter_linux.h>
#include <glib-object.h>

#include <cstdint>

G_DECLARE_FINAL_TYPE(FlCustomTextureGL,
                     fl_custom_texture_gl,
                     FL,
                     CUSTOM_TEXTURE_GL,
                     FlTextureGL)

struct _FlCustomTextureGL {
  FlTextureGL parent_instance;

  uint32_t target;
  GLuint native_texture_id;
  uint32_t width;
  uint32_t height;
};

FlCustomTextureGL* fl_custom_texture_gl_new(uint32_t target,
                                            uint32_t name,
                                            uint32_t width,
                                            uint32_t height);

#endif  // LINUX_INCLUDE_FLUTTER_LINUX_WEBVIEW_FL_CUSTOM_TEXTURE_GL_H_
