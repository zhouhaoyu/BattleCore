//#include "stdafx.h"
#include "../../../stdafx.h"
#include "B_ShotgunBall.h"


B_ShotgunBall::B_ShotgunBall(void)
{
}

B_ShotgunBall::B_ShotgunBall(double x,double y,double rr,int launcherIDX)
{
	shapeType=S_Circle;
	LoadData(BT_ShotgunBall);

	GeneralInit(x,y,rr,launcherIDX);

}




B_ShotgunBall::~B_ShotgunBall(void)
{
}

bool B_ShotgunBall::HitObstcale(Obstacle& ob)
{
	return GeneralHitObstcale(ob);
}
bool B_ShotgunBall::Hit(Robot& robot)
{
	return GeneralHit(robot);
}

bool B_ShotgunBall::HitFlyEnd()
{
	return false;
}
