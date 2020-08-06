# Autonomous-Terrace-Farming-Robot
This repository contains the code,reports and the images of the Terrace Farming Robot fabricated by me and my team for the Inter IIT Tech Meet 8.0

## Problem Statement
To Model and Build an autonomous Terrace Farming Robot for Hilly Areas.

## Introduction
In Hilly Areas, usually the type of Agriculture practiced is done in Step like Structures and this is called Terrace Farming.
Evident from the above explanation, it is highly difficult to take animals up the hills to perform the farming taska and the heavy Machinery, well thats out of Question!
The main motivation behind this project was to help the farmers in the above situation.

## The Robot
The Terrace Farming Robot that we built was essentially an Autonomous Stair Climbing Robot which could ascend and descend stair of the height of about 40cm high. 
The Working principle we chose for the Robot was Chain Slider Mechanism. In the following mechanism the robot has three portions, the front middle and the back where sliders were attched to the middle portions upon which the front and back portions could slide using the chain.
The Robot was first designed on Solidworks and then fabricated using PVP pipes.
The Dimensions of the Robot are 100x70x60 and can perform the following Functionalities:
1) Ploughing.
2) Seeding.
3) Harvesting.

## Components:

 **Hardware Components:**
 1) Arduino Mega Microcontroller board.
 2) Hercules Motor Drivers
 3) UltraSonic Sensors
 4) Color Sensor
 
 **Mechanical Components:**
 1) Planetary Motors(For the Chain Slider Mechanism)
 2) DC Motors (For motion and for the plough)
 3) Omni Wheels.
 
## Working Of the Robot:

The Robot when placed on the top step first detects the yellow color(a part of the problem statement) and then starts movin forward. In total the robot has 18 Ultra sonic Sensors at various locations. Based on the distances detected from the walls on either sides the Robot adjusts its speed and once it reaches the area where the soil is kept it starts ploughing and in the return journey it starts seeding. 
The Second time it detects the yellow coloured block the robot descends down the stair. Here ,Once the robot detects a Red color it again starts moving towards the crops region adjusting speeds and starts Harvesting.

The Detailed Project Report can be found on the Github Repository.
The Problem Statement can be found here:
http://interiittech.org/events/terrace-farming-robot.html
