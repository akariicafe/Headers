@interface SBCornerGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) unsigned long long cornerGestureRequiresEducation;
@property (nonatomic) unsigned long long bottomLeftCornerGestureFeature;
@property (nonatomic) unsigned long long bottomLeftCornerGestureTouchTypes;
@property (nonatomic) unsigned long long bottomRightCornerGestureFeature;
@property (nonatomic) unsigned long long bottomRightCornerGestureTouchTypes;

- (void)_bindAndRegisterDefaults;
- (void)_migrateSkyDefaultsIfNecessary;

@end
