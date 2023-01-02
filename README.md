# Gazebo Dorm
A Gazebo simulation of my dorm room.

This was created as part of the [Udacity Robotics Software Engineer 
Nanodegree 
Program](https://www.udacity.com/course/robotics-software-engineer--nd209).

## Configuration
To correctly load the project, the `GAZEBO_MODEL_PATH` and 
`GAZEBO_PLUGIN_PATH` environment variables must be set:
```bash
$ export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:<path_to_project>/Dorm/model
$ export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:<path_to_project>/Dorm/build
```

## Building
In the root of the project, please run the following commands:
```bash
$ mkdir build
$ cd build
$ cmake ../
$ make
$ cd ..
```

## Running
Then, you can launch the world in Gazebo 🎉:
```bash
$ gazebo world/Dorm.world
```

## Attributions
I used the following free 3D graphics found online here:
- [Messy Bed](https://sketchfab.com/3d-models/messy-bed-b49dc1778b0b430cabdbad327d6e2e0d)
- [Bean Bag](https://sketchfab.com/3d-models/bean-bag-f7839a74bf84475db57bb063845adba9)
- [Modern Ottoman Double](https://sketchfab.com/3d-models/modern-ottoman-double-769391d27a47453ca2118a361824a82d)
