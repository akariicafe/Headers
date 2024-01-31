@interface SBInCallPresentationDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL assertNoZombieInCallScenes;
@property (readonly, nonatomic) BOOL skipPromptUnlockEntitlementCheck;

- (void)_bindAndRegisterDefaults;

@end
