# Requirements 

# Introduction

Choosing a best outfit is one of the challenges that we face while we go for shopping. Even after spending lots of time on shopping for dresses, finally we buy a dress that we will not be fully satisfied in. Some dress that attracts us while its shown in the showcase, may not be good after we wear them on the big day.

So, this project is to calculate the body shape of female, according to their bust size, waist size, high hip size and hip size values. Then, according to to body shape, with respect to the choice of dress, jumsuits, shorts, skrits, jeans, the different types of the outfit chosen will be displayed which is best suitable for that particular body type, will be displayed .


# Research

We can achieve picture perfect figure with some ‘Enhance & Minimize’ tricks, which helps to create an illusion of a proportional balanced body shape. They help flatter your body figure, making your top and lower body look beautiful as well as balanced. Don’t push yourself to the latest fashion, search for clothing according to your body type. This way, you can simply look at your best, putting emphasis on your best features and disguising the odd ones.

There are generally 5 different body types for female, which are shown below :

![body-shape](https://user-images.githubusercontent.com/55780247/142796070-a782c02d-17b7-4d60-96a8-41a5a68efc12.png)

Female body shapes in the fashion industry
In the fashion industry, body shapes are often categorized into four classes.

* Apple, or inverted triangle

    This body shape describes a person who has broader shoulders and bust than they do hips.

* Banana, straight, or rectangle

    This body shape describes a person who typically has waist measurements that are less than 9 inches smaller than the hip or bust measurements.

* Pear, spoon, bell, or triangle

    This body shape describes a person who has hip measurements greater than their bust measurements.

* Hourglass, X shape, triangles opposing, or facing inwards

    This body shape (typically presented as the "ideal") describes a person with hip and bust measurements nearly equal in size, with a narrower waist measurement.

# SWOT ANALYSIS

![SWOT Analysis](https://user-images.githubusercontent.com/55780247/142889608-526ffbcc-4e7a-43af-952d-ee6c25719fc8.png)

# 4W's and 1'H

# Who

People who want to look good by getting targeted outfit ideas for their body shape.

# What 

Calculates the body shape and suggests them the best suitable outfit for their body.

# When

Anytime they want to get themselves dressed well.

# Where

In the Application/system which has this program.

# How

By entering the measurements of the induviduals bust size, waist size, high hip size, hip size.

# High Level Requirements  

    

       1. ID          : HLR_01

          DESCRIPTION : Visual Studio code platform.

          PLATFORM    : Software.

       

       2. ID          : HLR_02

          DESCRIPTION : Window 10 or Linux

          PLATFORM    : Software.

       

       3. ID          : HLR_03

          DESCRIPTION : GitHub

          PLATFORM    : Software.





# Low Level Requirements 



      1. ID          : LLR_01

          DESCRIPTION : Outfit Advisor

       

       2. ID          : LLR_02





          DESCRIPTION : Formulas


# UML - Unified Modelling Language

A standardized modeling language consisting of an integrated set of diagrams, developed to help system and software developers for specifying, visualizing, constructing, and documenting the artifacts of software systems, as well as for business modeling and other non-software systems. The UML represents a collection of best engineering practices that have proven successful in the modeling of large and complex systems. The UML is a very important part of developing object oriented software and the software development process. The UML uses mostly graphical notations to express the design of software projects. Using the UML helps project teams communicate, explore potential designs, and validate the architectural design of the software.

# Behavioral Diagrams

UML’s five behavioral diagrams are used to visualize, specify, construct, and document the dynamic aspects of a system. It shows how the system behaves and interacts with itself and other entities (users, other systems). They show how data moves through the system, how objects communicate with each other, how the passage of time affects the system, or what events cause the system to change internal states. Since behavior diagrams illustrate the behavior of a system, they are used extensively to describe the functionality of software systems. As an example, the activity diagram describes the business and operational step-by-step activities of the components in a system.

# 1. Activity Diagram

It is a graphical representations of workflows of stepwise activities and actions with support for choice, iteration and concurrency

# 2. Use Case Diagram

It describes a system’s functional requirements in terms of use cases that enable you to relate what you need from a system to how the system delivers on those needs.

# 3. State Machine Diagram

It shows the discrete behavior of a part of a designed system through finite state transitions.

# 4. Sequence Diagram

It shows the sequence of messages exchanged between the objects needed to carry out the functionality of the scenario.

# 5. Communication Diagram

It shows interactions between objects and/or parts (represented as lifelines) using sequenced messages in a free-form arrangement.

# 6. Interaction Overview Diagram

It depicts a control flow with nodes that can contain other interaction diagrams.

# 7. Timing Diagram

It shows interactions when the primary purpose of the diagram is to reason about time by focusing on conditions changing within and among lifelines along a linear time axis.

# Structural Diagrams

Structure diagrams depict the static structure of the elements in your system. i.e., how one object relates to another. It shows the things in the system – classes, objects, packages or modules, physical nodes, components, and interfaces. For example, just as the static aspects of a house encompass the existence and placement of such things as walls, doors, windows, pipes, wires, and vents. The Seven UML structural diagrams are roughly organized around the major groups of things you’ll find when modeling a system.

Since structure diagrams represent the structure, they are used extensively in documenting the software architecture of software systems.

# 1. Composite Structure Diagram

It shows the internal structure of a classifier, classifier interactions with the environment through ports, or behavior of a collaboration.

# 2. Deployment Diagram

It shows a set of nodes and their relationships that illustrates the static deployment view of an architecture.

# 3. Package Diagram

It groups related UML elements into a collection of logically related UML structure.

# Profile Diagram
# 4. Class Diagram

It shows a set of classes, interfaces, and collaborations and their relationships, typically, found in modeling object-oriented systems.

# 5. Object Diagram

It shows a set of objects and their relationships, which is the static snapshots of instances of the things found in class diagrams.

# 6. Component Diagram

It shows a set of components and their relationships that illustrates the static implementation view of a system.


# Behavioural Diagram

![Outfit_Advisor](https://user-images.githubusercontent.com/55780247/143413011-be771689-4a57-4428-8563-10a16c064c52.jpg)



# Structural Diagram

# High Level Diagram


![Basic Activity Diagram (1)](https://user-images.githubusercontent.com/55780247/143404388-59d5081f-8e50-4458-a576-be92fe9190e3.jpg)

# Low Level Diagram

![Basic Activity Diagram (3)](https://user-images.githubusercontent.com/55780247/143408889-59c8bd3a-f41a-4b66-b4f7-2041ffd43682.jpg)




# Implementation

# Folder Structure


| Folder        | Description       |
| ------------- | -------------     |
| inc           | All headers files |
| src  | Main source code  |
|unity|All unity files|
|test|All source code and data for testing purpose|
|build|Build output (not included in git)|

TEST PLAN:


TABLE NO:HIGH LEVEL TEST PLAN:

​

|Test ID|Description|Exp I/P|Exp O/P|Actual O/P|Type of Test|
|---|---|---|---|---|---|
|H_01|Check and verify all the measurement values are entered |Enter the proper measurements according to the description |Body shape is displayed|Body shape is displayed|Requirement Based|
|H_02|Check whether all entered measurements is displayed correctly |Enter the measurements|Bodyshape is displayed|Bodyshape is displayed|Scenario Based|
|H_03|Check whether choice is displayed correctly |Enter the choice|Choices displayed|Choices displayed|Scenario Based|
|H_04|Check whether entered measurements is correct|Enter the measurements|Display Choices|Display Choices|Boundary Based| 
|H_05|Check whether entered choice of outfit is correct|Enter the choice number|Display Choices|Display Choices|Boundary Based| 
​


TABLE NO:LOW LEVEL TEST PLAN:

​
|Test ID|Description|Exp I/P|Exp O/P|Actual O/P|Type of Test|
|---|---|---|---|---|---|
|L_01|To check if the measurements give the proper bodyshape|Measurements|Bodyshape|Bodyshape|Requirement Based|
|L_02|To check if the choices give the proper bodyshape|Choice|The required outfit|The required outfit|Requirement Based|
|L_03|To check if all of the four required measurements are entered|Bust, Waist, Highhip, Hip sizes|Display Bodyshape|Display Bodyshape|Scenario Based|
|L_04|To check if required choice is entered|Choices|Display the best outfits|Display the best outfits|Scenario Based|

​