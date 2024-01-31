@interface SBMedusa1oSettings : PTSettings

@property (nonatomic) BOOL debugRotationCenter;
@property (nonatomic) BOOL debugColorRotationRegions;
@property (nonatomic) BOOL clipRotationRegions;
@property (nonatomic) double zoomOutRotationFactor;
@property (nonatomic) double rotationSlowdownFactor;
@property (nonatomic) BOOL fencesRotation;
@property (nonatomic) unsigned long long millisecondsBetweenResizeSteps;
@property (nonatomic) double gapSwipeBuffer;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
