@class NSObject;
@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultBroadcaster;

- (id)init;
- (id)_queue;
- (void)dealloc;
- (id)broadcastProxyForTargets:(id)a0 messageContext:(id)a1 protocol:(id)a2;
- (void)blockUntilSendQueueIsEmpty;
- (id)broadcastProxyForTarget:(id)a0 messageContext:(id)a1 protocol:(id)a2 priority:(int)a3;
- (void)flushProxy:(id)a0;
- (id)broadcastProxyForTarget:(id)a0 messageContext:(id)a1 protocol:(id)a2;
- (id)broadcastProxyForTarget:(id)a0 messageContext:(id)a1 protocol:(id)a2 priority:(int)a3 completion:(id /* block */)a4;

@end
