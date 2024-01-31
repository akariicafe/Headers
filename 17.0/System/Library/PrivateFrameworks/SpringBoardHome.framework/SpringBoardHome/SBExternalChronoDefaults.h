@interface SBExternalChronoDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL showInternalWidgets;

+ (id)sharedInstance;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
