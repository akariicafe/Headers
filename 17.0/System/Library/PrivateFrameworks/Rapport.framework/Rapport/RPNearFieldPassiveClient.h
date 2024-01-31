@interface RPNearFieldPassiveClient : RPNearFieldClient

@property (copy, nonatomic) id /* block */ alwaysOnHandler;

- (void).cxx_destruct;
- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)a0;
- (void)startDiscoveryWithApplicationLabels:(id)a0 completion:(id /* block */)a1;

@end
