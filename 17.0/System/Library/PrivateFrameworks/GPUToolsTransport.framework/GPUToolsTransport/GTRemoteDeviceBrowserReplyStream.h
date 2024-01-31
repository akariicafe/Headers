@protocol GTRemoteDeviceBrowserObserver;

@interface GTRemoteDeviceBrowserReplyStream : GTXPCDispatcher <GTRemoteDeviceBrowserObserverXPCDispatcher> {
    id<GTRemoteDeviceBrowserObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyDeviceListChanged_:(id)a0 replyConnection:(id)a1;

@end
