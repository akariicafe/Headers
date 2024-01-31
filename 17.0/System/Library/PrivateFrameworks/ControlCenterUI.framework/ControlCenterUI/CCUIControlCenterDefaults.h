@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL shouldAlwaysBeEnabled;
@property (readonly, nonatomic) BOOL shouldExcludeControlCenterFromStatusBarOverrides;
@property (nonatomic) BOOL hasForceTouchedToExpandModule;
@property (nonatomic) BOOL hasLongPressedToExpandModule;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
