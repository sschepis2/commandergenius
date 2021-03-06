/*
*	Copyright (C) 2005 Chai Braudo (braudo@users.sourceforge.net)
*
*	This file is part of Jooleem - http://sourceforge.net/projects/jooleem
*
*   Jooleem is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   Jooleem is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with Jooleem; if not, write to the Free Software
*   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _PAUSEDSTATE_H_
#define _PAUSEDSTATE_H_

// Game paused engine state. Singleton.

#include "../engine/enginestate.h"

class PausedState: public EngineState
{
	private:


	public:
		void Init(Engine* engine);
		void Enter(Engine* engine);
		void Exit(Engine* engine);
		void HandleEvents(Engine* engine);	
		void Update(Engine* engine);	
		void Draw(Engine* engine);
		void Cleanup(Engine* engine);

		static PausedState* GetInstance();

	private:
		static PausedState* m_instance;
		PausedState(){};					
		PausedState(const PausedState&);
		PausedState& operator= (const PausedState&);
};


#endif

