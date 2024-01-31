@class GTBulkDataServiceXPCProxy, GTReplayRequestToken, NSObject;
@protocol OS_os_log;

@interface GTReplayADSReplyStream : NSObject <GTXPCDispatcher> {
    NSObject<OS_os_log> *_log;
    id /* block */ _callback;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    GTReplayRequestToken *_token;
}

@property unsigned long long dispatcherId;

- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;
- (id)initWithCallback:(id /* block */)a0 bulkDataProxy:(id)a1 andToken:(id)a2;

@end
