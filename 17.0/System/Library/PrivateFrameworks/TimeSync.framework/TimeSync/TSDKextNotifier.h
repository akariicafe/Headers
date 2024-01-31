@class NSMutableArray;

@interface TSDKextNotifier : TSDIOKServiceMatcher {
    NSMutableArray *_matchNotificationsArray;
    NSMutableArray *_terminateNotificationsArray;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)serviceMatched:(id)a0;
- (void)notifyWhenServiceIsUnavailable:(id /* block */)a0;
- (void)notifyWhenServiceIsAvailable:(id /* block */)a0;
- (void)serviceTerminated:(id)a0;

@end
