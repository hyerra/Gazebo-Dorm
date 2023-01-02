#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginDorm : public WorldPlugin
  {
    public: WorldPluginDorm() : WorldPlugin()
            {
              printf("Hello World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginDorm)
}
