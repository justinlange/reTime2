//#include "testApp.h"
//#include "ofAppGlutWindow.h"
//
//int main() {
//	ofAppGlutWindow window;
//	ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);
//	ofRunApp(new testApp());
//}



#include "ofApp.h"
#include "ofAppGlutWindow.h"

int main() {
	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 640, 960, OF_WINDOW);
	ofRunApp(new ofApp());
}