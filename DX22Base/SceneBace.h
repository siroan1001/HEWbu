#pragma once

#ifndef _____SCENE_BACE_H____
#define _____SCENE_BACE_H____

#include "Sound.h"
#include "Object.h"
#include <vector>


class SceneBace
{
public:
	SceneBace() {};
	virtual ~SceneBace() {};
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual void ReStart() = 0;

	static IXAudio2SourceVoice* GetBGMSource() { return m_pBGMSource; }

protected:
	static IXAudio2SourceVoice* m_pBGMSource;
	std::vector<Object*> m_ObjList;
};



#endif // !_____SCENE_BACE_H____
