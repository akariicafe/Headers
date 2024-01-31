@interface STSystemStatusDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL shouldEnableInternalBundles;
@property (nonatomic) BOOL shouldEnableUnknownBundles;
@property (nonatomic) BOOL shouldEnableUnknownBackgroundActivities;
@property (nonatomic) BOOL shouldEnableUnknownStatusItems;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
