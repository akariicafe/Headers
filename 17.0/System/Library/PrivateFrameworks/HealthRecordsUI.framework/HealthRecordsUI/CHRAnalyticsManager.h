@interface CHRAnalyticsManager : NSObject {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ conceptStore;
    void /* unknown type, empty encoding */ queuedEvents;
    void /* unknown type, empty encoding */ managerQueue;
    void /* unknown type, empty encoding */ optInDetermined;
}

@property (class, nonatomic, readonly) CHRAnalyticsManager *shared;

- (id)init;
- (void).cxx_destruct;
- (void)postOnboardingFunnelEventWithStep:(long long)a0 context:(long long)a1 gatewayUrl:(id)a2;
- (void)postPrivacyInteractionEventWithType:(long long)a0 context:(long long)a1 action:(BOOL)a2;
- (void)postUserInteractionEventWithType:(long long)a0 context:(long long)a1 action:(long long)a2 category:(id)a3 conceptIdentifier:(id)a4;
- (void)submitAndFlushQueuedEvents;

@end
