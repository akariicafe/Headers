@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSXPCConnection *_connection;
    id /* block */ _observationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (void)dealloc;
- (void)flushWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)_connectionInvalidated;
- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_cleanUpConnection;
- (oneway void)didObserveEvents:(id)a0 completion:(id /* block */)a1;
- (id)initWithObservation:(id /* block */)a0;
- (void)waitUntilInvalidated;

@end
