@interface SNNetworkManagerInternal : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientRegistrationDelegate> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ coreTelephonyClient;
    void /* unknown type, empty encoding */ dataServiceDescriptor;
    void /* unknown type, empty encoding */ lastDataSubscriptionSlot;
    void /* unknown type, empty encoding */ subscriptionSlotOneStatus;
    void /* unknown type, empty encoding */ subscriptionSlotTwoStatus;
    void /* unknown type, empty encoding */ lastSuccessfulSymptomsFetch;
    void /* unknown type, empty encoding */ lastFetchInProgress;
    void /* unknown type, empty encoding */ lastSignalStrength;
    void /* unknown type, empty encoding */ subscriptionCount;
    void /* unknown type, empty encoding */ carrierName;
    void /* unknown type, empty encoding */ pathEvaluator;
    void /* unknown type, empty encoding */ pathStatus;
    void /* unknown type, empty encoding */ pathUsesCellular;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ networkWiFiManager;
    void /* unknown type, empty encoding */ networkWirelessCoexManager;
}

@property (class, nonatomic, readonly) SNNetworkManagerInternal *shared;

+ (void)acquireDormancySuspendAssertion:(id *)a0;
+ (void)releaseDormancySuspendAssertion:(id *)a0;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)preferredDataSimChanged:(id)a0;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (void).cxx_destruct;
- (void)unregisterClient;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)addObserver:(id)a0;
- (void)carrierBundleChange:(id)a0;
- (void)registerClient;
- (void)forceFastDormancy;
- (void)releaseWiFiAssertion;
- (void)stopMonitoringNetwork;
- (void)getSNLinkRecommendationMetrics:(id /* block */)a0;
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)a0;
- (void)getSNProximityLinkRecommendationWithRetry:(BOOL)a0 completion:(id /* block */)a1;
- (void)getSNSubscribeLinkRecommendation:(id /* block */)a0;
- (void)startMonitoringNetwork:(id)a0;

@end
