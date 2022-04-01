#include <iostream>
#include <string>

#include <src/WindowManager.hpp>
#include <src/ecs/ComponentContainer.hpp>
#include <src/ecs/EntityManager.hpp>
#include <src/ecs/ComponentManager.hpp>
#include <src/ecs/SystemManager.hpp>
#include <src/ecs/Entity.hpp>
#include <src/ecs/ECS.hpp>


using namespace std;

int main(int argc, char *argv[]) 
{
    WindowManager wManager;
	wManager.Init("Test window", true);

    Entity entity1;

    if (true) 
    {
        Entity entity2;
    }
    

    cout << ecs::entityManager.GetLivingEntitiesCount() << endl;
}