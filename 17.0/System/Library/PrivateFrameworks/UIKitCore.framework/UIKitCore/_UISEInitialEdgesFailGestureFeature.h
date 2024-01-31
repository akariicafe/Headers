@protocol _UISEGestureFeatureSettings;

@interface _UISEInitialEdgesFailGestureFeature : _UISEGestureFeature {
    id<_UISEGestureFeatureSettings> _settings;
    BOOL _useEdgeRegionSize;
}

- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;
- (id)initWithSettings:(id)a0 useEdgeRegionSize:(BOOL)a1;
- (void).cxx_destruct;

@end
