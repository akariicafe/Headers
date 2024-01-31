@class NSString, _UISEGestureFeatureSettings, _UISEMuxGestureFeature;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UISEGestureFeatureDelegate> {
    _UISEGestureFeatureSettings *_settings;
    id /* block */ _createFeatureBlock;
    _UISEMuxGestureFeature *_rootFeature;
    unsigned long long _touchedEdges;
}

@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldSupportStylusTouches;
+ (BOOL)_shouldDefaultToTouches;

- (void)_setHysteresis:(double)a0;
- (void)_setBottomEdgeRegionSize:(double)a0;
- (void)_setBottomEdgeAngleWindow:(double)a0;
- (void)reset;
- (double)_bottomEdgeAngleWindow;
- (double)_bottomEdgeRegionSize;
- (unsigned long long)touchedEdges;
- (void)_setEdgeRegionSize:(double)a0;
- (BOOL)_shouldTryToBeginWithEvent:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (long long)_touchInterfaceOrientation;
- (void)setMinimumNumberOfTouches:(unsigned long long)a0;
- (void)featureDidChangeState:(id)a0;
- (id)debugDictionary;
- (void)encodeWithCoder:(id)a0;
- (double)_edgeRegionSize;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
