@interface BKSSpringBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic) float brightness;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
