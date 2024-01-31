@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface DNDSXPCEventPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSMutableArray *_pendingEvents;
    NSMutableDictionary *_subscribers;
    const char *_requiredEntitlement;
}

- (void)_handleEventAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (void)_queue_sendPendingEvents;
- (void)_queue_addSubscriberForToken:(unsigned long long)a0 descriptor:(id)a1;
- (void)_queue_removeSubscriberForToken:(unsigned long long)a0;
- (void)broadcastEvent:(id)a0;
- (void)_queue_sendEventWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithStream:(const char *)a0;

@end
