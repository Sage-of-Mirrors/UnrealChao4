# UnrealChao4

<div align="center">
  <video src="https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/fc018faf-6621-4895-9610-6c9df8c34fdd" width="640" height="480" />
</div>

This is a recreation of the virtual pets called [Chao](https://sonic.fandom.com/wiki/Chao) from the 1998 Dreamcast game *Sonic Adventure* franchise in Unreal Engine 4.27. I started this project in early 2020, right before the COVID-19 pandemic hit.

## Assets

<div align="center">
  <video src="https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/d9e09e86-f0c8-429b-8eb7-f5c061e47557" width="640" height="480" />
</div>

<div align="center">
  <video src="https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/18112336-b970-4343-b188-9fdb0474a3c1" width="640" height="480" />
</div>



## Behavior

<div align="center">
  <video src="https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/d28b3c63-47fa-4901-ae92-3c28d374127e" width="640" height="480" />
</div>

Like most virtual pets, Chao have "needs" values that change over time - things like hunger, sleepiness, and boredom. When a Chao wants perform an action, it evaluates its current needs values and rolls some probability checks to determine exactly *what* it is going to do. I implemented this system in Unreal Engine using a Behavior Tree.

![UE4Editor_2020-01-22_12-21-35](https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/9ab6cf85-307d-45df-8f96-c83bd6faad61)

When the Tree executes a Task, the Task runs a `DecideIfPerformingBehavior` function to check the needs relevant to the Task and roll the necessary probability checks.

![UE4Editor_2020-01-21_00-28-46](https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/362fd459-7225-491d-b354-4f28b6393def)

If the function returns false, then the Task yields execution back to the Tree, and the Tree continues executing the next Tasks in line. However if the function returns true, the Task enters a Tick state which performs its main logic.

![UE4Editor_2020-01-22_17-30-03](https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/9a50af93-8e6a-43d0-9452-0b3d13c28dba)

The Behavior Tree Tasks for the Chao tend to be simple state machines like the one above, which represents the "yawning" action.

## Emotion Ball

<div align="center">
  <video src="https://github.com/Sage-of-Mirrors/UnrealChao4/assets/6289769/7b247a41-f10d-469b-be4e-fbd1b74f9e0c" width="640" height="480" />
</div>

A distinctive feature of the Chao is their Emotion Ball, which hovers over their heads. It serves to telegraph to the player how a Chao is feeling. For example, it will change to a heart icon to show that the Chao likes something, or a spiral icon if the Chao dislikes something. The video above demonstrates the Emotion Ball Blueprint that I created cycling between each of its states. The Blueprint is attached to its Chao actor, and uses a billboarded sprite to ensure that the icons always face towards the player's camera.

