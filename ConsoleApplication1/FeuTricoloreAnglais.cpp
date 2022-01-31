#include "FeuTricoloreAnglais.h"

FeuTricoloreAnglais::FeuTricoloreAnglais(State state) : FeuTricolore(state)
{
}

void FeuTricoloreAnglais::setState(State state)
{
	switch (m_pState)
	{
	case State::vert:
		if (state != State::jaune)
		{
			throw ("wrong state");
		}
		m_pState = state;
		break;
	case State::jaune:
		if (state != State::rouge)
		{
			throw ("wrong state");
		}
		m_pState = state;
		break;
	case State::rouge:
		if (state != State::vert)
		{
			throw ("wrong state");
		}
		m_pState = state;
		break;
	case State::rougejaune:
		if (state != State::vert)
		{
			throw ("wrong state");
		}
		m_pState = state;
		break;
	default:
		throw ("something wrong");
	}

}

void FeuTricoloreAnglais::moveState()
{
	switch (m_pState)
	{
	case State::vert:
		m_pState = State::jaune;
		break;
	case State::jaune:
		m_pState = State::rouge;
		break;
	case State::rouge:
		m_pState = State::rougejaune;
		break;
	case State::rougejaune:
		m_pState = State::vert;
		break;
	default:
		throw ("something wrong");
	}
}