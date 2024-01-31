@interface RPNearFieldActiveClient : RPNearFieldClient

- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)a0;
- (void)startDiscoveryWithApplicationLabel:(id)a0 completion:(id /* block */)a1;

@end
