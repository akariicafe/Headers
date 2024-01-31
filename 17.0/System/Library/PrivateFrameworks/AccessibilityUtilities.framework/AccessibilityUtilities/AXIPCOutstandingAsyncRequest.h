@class NSObject;
@protocol OS_dispatch_queue;

@interface AXIPCOutstandingAsyncRequest : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (readonly, nonatomic) unsigned int replyPort;
@property (readonly, nonatomic) id /* block */ replyHandler;
@property (readonly, nonatomic) struct __CFRunLoopSource { } *replyMachPortSource;

+ (void)initialize;
+ (id)lookupByPort:(unsigned int)a0;
+ (void)registerOutstandingRequest:(id)a0;
+ (void)unregisterByPort:(unsigned int)a0;

- (void)_responseReceived:(id)a0;
- (void)dealloc;
- (void)initialSendAborted;
- (void)registerAndListenForResponse;
- (void)rawResponseReceived:(id)a0;
- (void).cxx_destruct;
- (void)sendOnceRightDestroyed;
- (id)initWithReplyPort:(unsigned int)a0 handlerQueue:(id)a1 handler:(id /* block */)a2;

@end
