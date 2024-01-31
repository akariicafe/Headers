@interface PRChronoDefaultsDomain : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL shouldShowInternalWidgets;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
