@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    unsigned long long _numberOfEventsBeingSent;
    NSObject<OS_dispatch_group> *_group;
}

@property BOOL needsCleanUpConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (id)init;
- (void)dealloc;
- (oneway void)endEventsGrouping;
- (oneway void)logInstrumentationOfType:(id)a0 machAbsoluteTime:(unsigned long long)a1 turnIdentifier:(id)a2;
- (oneway void)boostQueuedEvents:(id /* block */)a0;
- (void)_connectionInvalidated;
- (void)_stopIdleTimer;
- (oneway void)beginEventsGrouping;
- (void).cxx_destruct;
- (void)_startIdleTimer;
- (void)_idleTimerFired;
- (void)_connectionInterrupted;
- (void)_cleanUpConnection;
- (void)_cleanUpConnectionIfNeeded;
- (void)_didFinishSendingEvents:(id)a0;
- (void)_handleFailureCallbackForEvents:(id)a0 error:(id)a1 numberOfRetries:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_handleSuccessCallbackForEvents:(id)a0 completion:(id /* block */)a1;
- (void)_sendEvents:(id)a0 numberOfRetries:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_stageUEIEventData:(id)a0 timestamp:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_willStartSendingEvents:(id)a0;
- (oneway void)flushStagedEventsWithReply:(id /* block */)a0;
- (oneway void)stageEvents:(id)a0 completion:(id /* block */)a1;
- (oneway void)stageUEIEventData:(id)a0 timestamp:(unsigned long long)a1 completion:(id /* block */)a2;

@end
