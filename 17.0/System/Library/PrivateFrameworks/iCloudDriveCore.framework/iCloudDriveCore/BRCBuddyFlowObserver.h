@class NSOperationQueue, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCBuddyFlowObserver : NSObject {
    BOOL _waitingForBuddy;
    NSMutableDictionary *_registerdKeyToToken;
    NSOperationQueue *_observersQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedBuddyFlowObserver;

- (id)_init;
- (void).cxx_destruct;
- (void)_registerForSetupAssistantFinishedNotification;
- (void)_stopObservingBuddyAndExecuteCallbacks;
- (void)_unregisterForSetupAssistantFinishedNotification;
- (BOOL)doesBuddyFlowNeedsToRun;
- (BOOL)observeBuddyIfNecessaryWithKey:(id)a0 block:(id /* block */)a1 description:(id)a2;
- (void)stopObservingBuddyWithKey:(id)a0;

@end
