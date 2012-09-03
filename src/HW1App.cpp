#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HW1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

private:
	Surface* mySurface_;

	void makeCircle(int Vec2f, int loc);
};


	



void HW1App::setup()
{
}

void HW1App::mouseDown( MouseEvent event )
{
}

void HW1App::update()
{
}

void HW1App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
	float x = cos(getElapsedSeconds() );
	float y = sin(getElapsedSeconds() );
	gl::drawSolidCircle(Vec2f(x,y) + getWindowSize()/2, 50.0f);
}

CINDER_APP_BASIC( HW1App, RendererGl )
