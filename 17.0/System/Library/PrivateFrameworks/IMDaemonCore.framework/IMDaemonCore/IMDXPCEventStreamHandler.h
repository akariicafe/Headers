@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface IMDXPCEventStreamHandler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)removeDelegate:(id)a0;
- (id)initWithEventStreamName:(const char *)a0;
- (void).cxx_destruct;
- (void)didReceiveEventWithName:(id)a0 userInfo:(id)a1;
- (id)queueForDelegate:(id)a0;

@end
