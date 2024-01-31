@class UILongPressGestureRecognizer, CMMotionManager;

@interface NUDebugRenderView : NURenderView {
    UILongPressGestureRecognizer *_doubleTap;
    BOOL _showDebug;
    CMMotionManager *_motionManager;
}

- (BOOL)debugMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDebugMode:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_debugToggle:(id)a0;
- (void)_orientWithX:(double)a0 andY:(double)a1;
- (void)_resetOrientation:(id)a0;
- (void)_setupDeviceMotion;
- (void)_startDeviceMotion;
- (void)_stopDeviceMotion;

@end
