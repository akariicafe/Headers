@interface SBAmbientLiveActivitiesSettings : PTSettings

@property (nonatomic) double fullScreenDragCornerRadiusDampingRatio;
@property (nonatomic) double fullScreenDragCornerRadiusResponse;
@property (nonatomic) double fullScreenDragScaleDampingRatio;
@property (nonatomic) double fullScreenDragScaleResponse;
@property (nonatomic) double fullScreenDragPositionDampingRatio;
@property (nonatomic) double fullScreenDragPositionResponse;
@property (nonatomic) double fullScreenTransitionToCompactDampingRatio;
@property (nonatomic) double fullScreenTransitionToCompactResponse;
@property (nonatomic) BOOL fullScreenDismissGestureEnabled;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
