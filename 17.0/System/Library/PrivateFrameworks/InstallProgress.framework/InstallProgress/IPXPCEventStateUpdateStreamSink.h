@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface IPXPCEventStateUpdateStreamSink : NSObject <IPStateUpdateStreamSink, IPXPCEventStateUpdateStreamSubscriberDelegate> {
    NSString *_streamName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_event_publisher> *_publisher;
    BOOL _resumed;
    BOOL _foundInitialBarrier;
    NSMutableDictionary *_subscribers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (void).cxx_destruct;
- (void)_queue_processPublisherEventAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (id)initWithQueue:(id)a0 streamName:(id)a1;
- (void)sendUpdateMessage:(id)a0;
- (void)subscriber:(id)a0 firePayload:(id)a1;
- (void)subscriber:(id)a0 firePayload:(id)a1 withReply:(id /* block */)a2;
- (void)subscriberFailedHandshake:(id)a0;

@end
