#include "Goal.h"
#include "ModelList.h"

GoalObj::GoalObj()
{
	m_pModel = ModelList::GetModel(ModelList::E_MODEL_LIST_CONST_FLAG);

	//頂点シェーダをモデルに設定
	m_pModel->SetVertexShader(m_pVS);

	m_Info = { {10.0f, 3.25f, 0.0f}, {0.3f, 1.0f, 0.3f}, {0.0f, 0.0f, 0.0f} };
	m_ModelSize = { 0.05f, 0.05f, 0.05f };
	m_Color = XMFLOAT4(50.0f, 50.0f, 50.0f, 1.0f);
}

Def::Info GoalObj::GetInfo2()
{
	Def::Info info = m_Info;
	info.size.x = 0.1f;
	return info;
}