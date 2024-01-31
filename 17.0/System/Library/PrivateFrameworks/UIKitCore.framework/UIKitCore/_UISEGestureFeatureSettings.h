@interface _UISEGestureFeatureSettings : NSObject <_UISEGestureFeatureSettings>

@property (nonatomic) double backProjectTime;
@property (nonatomic) double bottomEdgeAngleWindow;
@property (nonatomic) double bottomEdgeRegionSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double cornerAngleWindow;
@property (nonatomic) double edgeAngleWindow;
@property (nonatomic) double edgeAngleWindowDecayTime;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long interfaceBottomEdge;
@property (nonatomic) unsigned long long minimumNumberOfSubfeatures;
@property (nonatomic) double maximumBackProjectTimeFactor;
@property (nonatomic) double maximumSwipeDuration;
@property (nonatomic) unsigned long long targetEdges;

- (id)init;

@end
