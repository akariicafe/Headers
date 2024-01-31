@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener> {
    int _circleChangeToken;
    BOOL _isObserving;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableArray *_circleObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_sendCircleStatusChangedForContext:(id)a0;
- (void)stopObservingCircleStatusChange;
- (void)_sendCircleViewStatusChangedForContext:(id)a0;
- (void)eventReceived:(const char *)a0 eventValue:(unsigned long long)a1;
- (const char *)_notificationName;
- (void).cxx_destruct;
- (void)observeCircleStateWithCircleProxy:(id)a0 changeHandler:(id /* block */)a1;
- (void)registerListener:(id)a0;
- (void)observeChangeToState:(unsigned long long)a0 circleProxy:(id)a1 handler:(id /* block */)a2;

@end
