@class GTBulkDataServiceXPCProxy, GTReplayRequestToken, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface GTReplayProfileReplyStream : NSObject <GTXPCDispatcher> {
    NSObject<OS_os_log> *_log;
    id /* block */ _callback;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    GTReplayRequestToken *_token;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property unsigned long long dispatcherId;

- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;
- (id)initWithCallback:(id /* block */)a0 bulkDataProxy:(id)a1 andToken:(id)a2;

@end
