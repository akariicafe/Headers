@class SBSStatusBarStyleOverridesCoordinator, NSString, SBSStatusBarStyleOverridesAssertion, DVTDeviceGlobalStatusIndicatorConfiguration, NSObject;
@protocol OS_os_log;

@interface DVTiOSDeviceGlobalStatusIndicator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate, DVTDeviceGlobalStatusIndicator> {
    NSObject<OS_os_log> *_statusIndicatorLog;
}

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarAssertion;
@property (retain, nonatomic) SBSStatusBarStyleOverridesCoordinator *coordinator;
@property (nonatomic) struct __CFUserNotification { } *userNotificationStopCondition;
@property (retain, nonatomic) DVTDeviceGlobalStatusIndicatorConfiguration *configuration;
@property (copy, nonatomic) id /* block */ stoppedByUserBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (void)statusBarCoordinator:(id)a0 invalidatedRegistrationWithError:(id)a1;
- (BOOL)statusBarCoordinator:(id)a0 receivedTapWithContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)acquireStatusBarWithCompletionHandler:(id /* block */)a0;
- (void)clearStatusBar;
- (BOOL)_showStopConditionAlert;
- (id)initWithConfiguration:(id)a0 stoppedByUserBlock:(id /* block */)a1;

@end
