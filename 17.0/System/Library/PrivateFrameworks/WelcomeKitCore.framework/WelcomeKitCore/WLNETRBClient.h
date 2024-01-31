@interface WLNETRBClient : NSObject {
    struct NETRBClient { } *_netrbClientRef;
    id /* block */ _dhcpStartCompletionBlock;
    id /* block */ _dhcpStopCompletionBlock;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_completionsAreNil;
- (void)_didStartDHCPWithSuccess:(BOOL)a0;
- (void)_didStopDHCPWithSuccess:(BOOL)a0;
- (struct NETRBClient { } *)_netrbClient;
- (BOOL)_startDHCPWithInterface:(id)a0;
- (BOOL)_stopDHCP;
- (BOOL)isIPAddressInRange:(id)a0;
- (void)startDHCPWithCompletion:(id /* block */)a0;
- (void)stopDHCPWithCompletion:(id /* block */)a0;

@end
