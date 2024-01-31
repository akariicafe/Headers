@interface _UISETeleportFailGestureFeature : _UISEGestureFeature {
    struct CGPoint { double x; double y; } _lastLocation;
}

- (id)init;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;

@end
