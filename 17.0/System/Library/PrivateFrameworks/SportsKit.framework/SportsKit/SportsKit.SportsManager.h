@interface SportsKit.SportsManager : NSObject {
    void /* unknown type, empty encoding */ dataStore;
    void /* unknown type, empty encoding */ playsStore;
    void /* unknown type, empty encoding */ xpcConnectionProvider;
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ activeSubscriptions;
    void /* unknown type, empty encoding */ activitiesMonitor;
    void /* unknown type, empty encoding */ disposables;
    void /* unknown type, empty encoding */ _clockSyncedPlaysPublisher;
    void /* unknown type, empty encoding */ _subscriptionPublisher;
    void /* unknown type, empty encoding */ _activitiesPublisher;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (long long)activitiesCount;
- (void)getEventForCanonicalId:(id)a0 completion:(id /* block */)a1;

@end
