@class NSArray;

@interface SBExternalDuetDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) NSArray *duetAllowedApps;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
