@class WFNetworkScanRecord;

@interface WFStubInterface : WFInterface {
    WFNetworkScanRecord *_currentNetwork;
}

@property BOOL currentNetworkIsDirected;
@property BOOL ipv4SelfAssigned;
@property BOOL hasNoGatewayIP;

- (id)currentNetwork;
- (void).cxx_destruct;
- (id)interfaceName;
- (void)setCurrentNetwork:(id)a0;

@end
