#include "CTPlayer.h"
#include "../../Input/InputManager.h"
#include "../../Service.h"
CTPlayer::CTPlayer()
{
	inputManager = Service<InputManager>::GetService();
}
CTPlayer::~CTPlayer()
{

}
