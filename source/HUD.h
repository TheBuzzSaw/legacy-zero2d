/**
 *  This file is part of Zero2D.
 *
 *  Zero2D is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Zero2D is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Zero2D.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HUD_H
#define HUD_H

#include "Widget.h"
#include "SpriteProgram.h"

#include <list>

#define HUD_RANGE 16.0f

class HUD
{
    public:
        HUD(SpriteProgram& inProgram);
        ~HUD();

        void add(Widget* inWidget);
        void remove(Widget* inWidget);
        void updateMouse(int inX, int inY, bool inLeft);
        void display();

    private:
        std::list<Widget*> mWidgets;
        SpriteProgram* mProgram;
        Matrix3D mProjection;
};

#endif
