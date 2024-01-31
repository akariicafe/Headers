@class VKNavCameraController, VKTimedAnimation;

@interface VKAttachedNavGestureCameraBehavior : VKGestureCameraBehavior {
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    VKTimedAnimation *_tapZoomAnimation;
}

- (void)tapZoom:(struct CGPoint { double x0; double x1; })a0 levels:(double)a1 completionHandler:(id /* block */)a2;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)dealloc;
- (void)beginZoom:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (void).cxx_destruct;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (void)_startZoomAnimationFrom:(double)a0 to:(double)a1 completionHandler:(id /* block */)a2;
- (id)initWithNavCameraController:(id)a0;

@end
