@protocol GTServiceProviderObserver;

@interface GTServiceProviderReplyStream : GTXPCDispatcher <GTServiceProviderObserverXPCDispatcher> {
    id<GTServiceProviderObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyServiceListChanged_:(id)a0 replyConnection:(id)a1;

@end
