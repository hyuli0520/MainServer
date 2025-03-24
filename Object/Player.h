#pragma once
#include "GameObject.h"

class GameSession;
class Room;

class Player : public GameObject
{
	using Super = GameObject;
public:
	Player(unsigned long long id);
	virtual ~Player();

	void SetSession(GameSession* session);
	GameSession* GetSession() const;
	shared_ptr<Room> GetRoom() const;
	string GetName() const;
	void SetName(string name);
	void SetPosition(Protocol::PositionInfo posInfo);
	Protocol::PositionInfo GetPosition();

	virtual void BeginPlay() override;
	virtual void Tick() override;

	void EnterRoom(shared_ptr<Room> gameRoom);
	void LeaveRoom();

private:
	GameSession* m_session;
	weak_ptr<Room> m_room;
	string m_playerName;
	Protocol::PositionInfo m_posInfo;
};

