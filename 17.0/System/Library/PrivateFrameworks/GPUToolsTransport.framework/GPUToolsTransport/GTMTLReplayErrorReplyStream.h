@protocol GTMTLReplayServiceObserver;

@interface GTMTLReplayErrorReplyStream : GTXPCDispatcher <GTMTLReplayServiceObserverXPCDispatcher> {
    id<GTMTLReplayServiceObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyError_:(id)a0 replyConnection:(id)a1;

@end
