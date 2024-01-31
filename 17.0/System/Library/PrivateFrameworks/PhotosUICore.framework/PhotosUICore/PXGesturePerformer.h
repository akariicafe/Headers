@interface PXGesturePerformer : NSObject

@property (class, readonly, nonatomic) BOOL isAvailable;

+ (long long)_UIAccessibilityDirection:(long long)a0;
+ (double)_amplitudeFactorBySpeed:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInScreenSpaceForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
+ (void)_handleResult:(id /* block */)a0 success:(BOOL)a1 error:(id)a2;
+ (long long)_oppositeDirection:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectInWindowCoordinateSpaceFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
+ (long long)_rptDirection:(long long)a0;
+ (id)_rptPlatformScrollViewFromPXScrollView:(id)a0;
+ (id)_rptPlatformViewFromPXView:(id)a0;
+ (id)_swipeParametersForScrollView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 count:(long long)a2 speed:(unsigned long long)a3 direction:(long long)a4;
+ (id)_swipeSpeedFactor:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewFrameInScreenSpace:(id)a0;
+ (void)performOscillatingInScrollView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 speed:(unsigned long long)a2 direction:(long long)a3 completionHandler:(id /* block */)a4;
+ (void)performSwipingInScrollView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 count:(long long)a2 speed:(unsigned long long)a3 direction:(long long)a4 roundTrip:(BOOL)a5 completionHandler:(id /* block */)a6;

@end
