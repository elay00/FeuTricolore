#pragma once

class FeuTricolore
{
public:
	enum State
	{
		vert = 0,
		jaune,
		rougejaune,
		rouge,
	};

protected:
	State m_pState = State::vert;

public:
	FeuTricolore(State state)
	{
		m_pState = state;
	}

	State getState()
	{
		return m_pState;
	}

	virtual void setState(State state) = 0;

	virtual void moveState() = 0;
};