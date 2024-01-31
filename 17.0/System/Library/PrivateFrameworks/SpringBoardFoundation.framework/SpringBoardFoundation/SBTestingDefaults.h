@class NSString;

@interface SBTestingDefaults : SBAbstractSpringBoardDefaultDomain

@property (copy, nonatomic) NSString *testRunnerRecoveryApplicationBundleIdentifier;

- (void)_bindAndRegisterDefaults;

@end
