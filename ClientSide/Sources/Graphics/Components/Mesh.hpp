/*
 * Copyright 2018 Vladimir Balun
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "../OpenGL.hpp"
#include "../../Math/Vectors.hpp"

namespace Graphics { namespace Components {

    class Mesh
    {
    public:
        Mesh() = default;
        Mesh(GLfloat* elements, std::size_t countElements);
        GLvoid draw();
        ~Mesh();
    public:
        static const std::uint8_t ALIGNMENT_VERTEX = 0;
        static const std::uint8_t ALIGNMENT_COLOR = 4;
        static const std::uint8_t ALIGNMENT_TEXTURE_COORDINATE = 8;
        static const std::uint8_t ALIGNMENT_NORMAL = 10;
        static constexpr std::uint8_t SIZE_ELEMENT = ALIGNMENT_NORMAL + 3;
    private:
        GLuint mVBO = 0;
        GLuint mVAO = 0;
        std::size_t mCountElements = 0;
        GLfloat* mElements = nullptr;
    };

}}