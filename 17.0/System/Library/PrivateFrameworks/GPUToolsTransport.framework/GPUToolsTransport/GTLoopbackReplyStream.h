@interface GTLoopbackReplyStream : NSObject <GTXPCDispatcher> {
    id /* block */ _callback;
}

@property unsigned long long dispatcherId;

- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;

@end
