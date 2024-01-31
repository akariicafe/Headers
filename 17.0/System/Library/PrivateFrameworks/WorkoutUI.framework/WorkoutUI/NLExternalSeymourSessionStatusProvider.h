@interface NLExternalSeymourSessionStatusProvider : NSObject <NLExternalSeymourSessionStatusProviding, NLExternalSeymourSessionStatusObservable> {
    void /* unknown type, empty encoding */ appBundleIdentifier;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ sessionClient;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ lastUpdateTimestamp;
}

@property (nonatomic) void /* unknown type, empty encoding */ externalSessionActive;
@property (nonatomic, retain) void /* unknown type, empty encoding */ observers;

- (void)removeObserver:(id)a0;
- (void)notifyObservers;
- (void)updateStatus;
- (void)addObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDependenciesWrapper:(id)a0 appBundleIdentifier:(id)a1;

@end
