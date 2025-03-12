#include "pch.h"
#include "ObjectManager.h"

ObjectManager::ObjectManager()
{
}

void ObjectManager::Init()
{
	m_idGenerator = 0;
}

void ObjectManager::HandleEnterGame(Session* session, Protocol::REQ_ENTER pkt)
{
	if (!session)
		return;

	auto gameSession = static_cast<GameSession*>(session);

	// if player is null -> false
	auto success = gameSession->GetPlayer() == nullptr;
	if (success)
	{
		Protocol::RES_ENTER res;
		res.set_success(success);

		auto player = CreateObject<Player>();
		player->SetSession(gameSession);
		player->BeginPlay();
		gameSession->SetPlayer(player);

		auto sendBuffer = ServerPacketHandler::MakeSendBuffer(res);
		gameSession->SendContext(move(*sendBuffer));
	}
	else
	{
		Protocol::RES_ENTER res;
		res.set_success(success);

		auto sendBuffer = ServerPacketHandler::MakeSendBuffer(res);
		gameSession->SendContext(move(*sendBuffer));
	}
}
