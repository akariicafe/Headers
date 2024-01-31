@class VSUserAccountUpdateRequest, VSStateMachine, NSObject, NSMutableSet, NSString, NSMutableArray, VSJSApp;
@protocol OS_dispatch_source, VSUserAccountUpdateManagerDelegate;

@interface VSUserAccountUpdateManager : NSObject <VSJSAppDelegate, VSStateMachineDelegate>

@property (retain, nonatomic) NSMutableSet *updateRequests;
@property (retain, nonatomic) NSMutableArray *updatedUserAccounts;
@property (retain, nonatomic) VSStateMachine *stateMachine;
@property (retain, nonatomic) VSJSApp *currentApp;
@property (retain, nonatomic) VSUserAccountUpdateRequest *currentUpdateRequest;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watchdog;
@property (weak, nonatomic) id<VSUserAccountUpdateManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_configureWatchdogWithSeconds:(unsigned long long)a0;
- (id)_requestOptionsWithUserAccounts:(id)a0 callback:(id)a1;
- (void)app:(id)a0 didFailToStartWithError:(id)a1;
- (void)app:(id)a0 prewarmWithContext:(id)a1;
- (void)appDidStart:(id)a0;
- (void)appDidStop:(id)a0;
- (id)initWithUserAccountUpdateRequests:(id)a0;
- (void)transitionToBootingAppState;
- (void)transitionToEnqueuingNextUserAccountSetState;
- (void)transitionToInvokingOnRequestCallbackState;
- (void)transitionToNotifyingFinishState;
- (void)transitionToNotifyingForUserAccountSetState;
- (void)transitionToStoppingAppState;
- (void)updateUserAccounts;

@end
