@class NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, OS_xpc_event_publisher;

@interface GCXPCEventPublisher : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher;
@property (retain, nonatomic) NSString *streamName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingSendEvents;
@property (retain, nonatomic) NSObject<OS_xpc_object> *stateEvent;
@property (retain, nonatomic) NSMutableSet *tokens;
@property (nonatomic) BOOL receivedInitialBarrier;
@property (nonatomic, getter=isStatefulEventPublisher) BOOL statefulEventPublisher;

- (id)initWithStreamName:(id)a0;
- (void)handleEventWithAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithStreamName:(id)a0 isStatefulEventPublisher:(BOOL)a1;
- (void)sendEvent:(id)a0 toSubscriber:(id)a1;

@end
