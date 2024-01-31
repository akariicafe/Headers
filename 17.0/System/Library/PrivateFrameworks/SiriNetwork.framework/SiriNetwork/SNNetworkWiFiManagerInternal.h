@interface SNNetworkWiFiManagerInternal : NSObject {
    void /* unknown type, empty encoding */ wifiManager;
    void /* unknown type, empty encoding */ wifiDevice;
    void /* unknown type, empty encoding */ wifiClientType;
    void /* unknown type, empty encoding */ interface;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queueGroup;
}

@property (class, nonatomic, readonly) SNNetworkWiFiManagerInternal *shared;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isWiFiEnabled;
- (void)releaseWiFiAssertion;
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)a0;
- (id)getWiFiRecordRepresentation;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (BOOL)registerOneShotPowerStateDidChangeForWiFiInterface:(id /* block */)a0;

@end
