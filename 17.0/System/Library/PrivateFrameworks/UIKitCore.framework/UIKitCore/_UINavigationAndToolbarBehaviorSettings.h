@interface _UINavigationAndToolbarBehaviorSettings : PTSettings

@property (nonatomic) BOOL enableLiftOnSelected;
@property (nonatomic) BOOL enableClippingBehavior;
@property (nonatomic) double buttonMinimumWidth;
@property (nonatomic) double buttonMinimumHeight;
@property (nonatomic) double buttonHorizontalOffset;
@property (nonatomic) double buttonVerticalOffset;
@property (nonatomic) double buttonMinimumDistanceFromEdge;
@property (nonatomic) double buttonCornerRadius;
@property (nonatomic) double buttonPadding;
@property (nonatomic) double backButtonLeadingPadding;
@property (nonatomic) double backButtonTrailingPadding;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
