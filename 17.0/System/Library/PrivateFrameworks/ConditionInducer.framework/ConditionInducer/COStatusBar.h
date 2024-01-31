@class SBSStatusBarStyleOverridesCoordinator, NSString, SBSStatusBarStyleOverridesAssertion;

@interface COStatusBar : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarAssertion;
@property (retain, nonatomic) SBSStatusBarStyleOverridesCoordinator *coordinator;
@property (nonatomic) struct __CFUserNotification { } *userNotificationStopCondition;
@property (retain, nonatomic) NSString *conditionClass;
@property (retain, nonatomic) NSString *profileDescription;
@property BOOL didRequestTeardownOnce;
@property (copy, nonatomic) id /* block */ terminationNotifyCallback;
@property (copy, nonatomic) id /* block */ terminationBeganCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)getDeviceType;
- (void).cxx_destruct;
- (void)statusBarCoordinator:(id)a0 invalidatedRegistrationWithError:(id)a1;
- (BOOL)statusBarCoordinator:(id)a0 receivedTapWithContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)showConditionIsTearingDownAlert;
- (void)acquireStatusBarWithCompletionHandler:(id /* block */)a0;
- (void)clearStatusBar;
- (id)doTeardownOnStop;
- (id)initWithConditionClass:(id)a0 profile:(id)a1 teardownBeganCb:(id /* block */)a2 teardownCompleteCb:(id /* block */)a3;
- (BOOL)showStopConditionAlert;

@end
