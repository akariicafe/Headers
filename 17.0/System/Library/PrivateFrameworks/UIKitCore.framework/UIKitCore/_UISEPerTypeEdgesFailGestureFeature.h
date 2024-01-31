@class NSDictionary, NSString;

@interface _UISEPerTypeEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider>

@property (readonly, nonatomic) unsigned long long touchedEdges;
@property (readonly, nonatomic) NSDictionary *edgeTypeSubfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureDidChangeState:(id)a0;
- (id)debugDictionary;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;
- (void).cxx_destruct;
- (id)initWithEdgeTypeSubfeatures:(id)a0;

@end
