@class AWAttentionAwarenessClient, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TLAttentionAwarenessObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_pollingForAttentionEventHandlers;
    BOOL _isFullyInitialized;
    BOOL _isPollingForAttention;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_attentionAwarenessClientQueue;
}

@property (class, readonly) TLAttentionAwarenessObserver *sharedAttentionAwarenessObserver;
@property (class, readonly) BOOL supportsAttenuatingTonesForAttentionDetected;

- (id)init;
- (void)dealloc;
- (void)_assertNotRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (void)_beginPollingForAttention;
- (void)_didCompleteInitialization;
- (void)_didReceiveAttentionPollingEventOfType:(unsigned long long)a0 attentionEvent:(id)a1;
- (void)_endPollingForAttention;
- (void)_invokePollingForAttentionEventHandlers:(id)a0 eventType:(long long)a1;
- (void)cancelPollForAttentionWithToken:(id)a0;
- (id)pollForAttentionWithEventHandler:(id /* block */)a0;

@end
