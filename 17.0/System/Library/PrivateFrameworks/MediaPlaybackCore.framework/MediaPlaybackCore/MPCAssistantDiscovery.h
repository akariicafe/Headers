@interface MPCAssistantDiscovery : NSObject {
    void *_reconSession;
}

@property (nonatomic) BOOL waitForCompleteClusters;

- (id)init;
- (void)dealloc;
- (void)stopDiscovery;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)a0 completion:(id /* block */)a1;
- (void)_discoverAirplayDevices:(id /* block */)a0;
- (void)discoverAirplayDevicesMatchingGroupID:(id)a0 completion:(id /* block */)a1;
- (void)discoverAirplayDevicesMatchingLogicalDeviceIDs:(id)a0 expectedCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)discoverAirplayDevicesMatchingUIDs:(id)a0 completion:(id /* block */)a1;

@end
