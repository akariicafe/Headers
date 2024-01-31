@interface SiriCoreWiFiManagerClient : NSObject {
    int _type;
    struct __WiFiManagerClient { } *_primitiveWiFiManagerClient;
    long long _rssi;
    long long _snr;
    long long _cca;
}

- (BOOL)isWifiEnabled;
- (id)init;
- (void)dealloc;
- (struct __WiFiManagerClient { } *)_primitiveWiFiManagerClient;
- (void)_setWiFiManagerClientType:(int)a0;
- (void)acquireWiFiAssertion:(long long)a0;
- (BOOL)hasAssociatedNetworkWithRSSI:(long long *)a0 andSNR:(long long *)a1 andCCA:(long long *)a2 andPhyMode:(id *)a3 andChannelInfo:(id *)a4 isCaptive:(BOOL *)a5;
- (BOOL)hasAssociatedNetworkWithRSSI:(long long *)a0 andSNR:(long long *)a1 andPhyMode:(id *)a2 andChannelInfo:(id *)a3 isCaptive:(BOOL *)a4;
- (void)registerOneShotEnabledHandler:(id /* block */)a0;
- (void)releaseWiFiAssertion;

@end
