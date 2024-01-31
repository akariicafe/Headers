@class VKARWalkingCameraController;

@interface VKARWalkingDebugGestureCameraBehavior : VKGestureCameraBehavior {
    VKARWalkingCameraController *_controller;
}

- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (id)initWithCameraController:(id)a0;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
