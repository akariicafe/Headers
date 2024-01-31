@class UIViewController;

@interface FLNetworkStatePrompter : NSObject {
    UIViewController *_presenter;
}

- (void)dealloc;
- (id)initWithPresenter:(id)a0;
- (void).cxx_destruct;
- (id)_cancelActionWithCompletionHandler:(id /* block */)a0;
- (id)_disableAirplaneActionWithCompletionHandler:(id /* block */)a0;
- (void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(id /* block */)a0;
- (void)_mainQueue_verificationFailedAlert;
- (void)preflightNetworkStateWithCompletionHandler:(id /* block */)a0;

@end
