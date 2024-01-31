@interface SBMultiUserDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL forceLoginWindow;
@property (readonly, nonatomic) BOOL disablesInternalDebugBlockingTasksUI;

- (void)_bindAndRegisterDefaults;

@end
