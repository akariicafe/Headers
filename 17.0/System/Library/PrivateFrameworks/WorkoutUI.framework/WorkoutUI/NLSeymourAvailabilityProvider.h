@interface NLSeymourAvailabilityProvider : NSObject <SeymourAvailabilityProviding, NLSeymourAvailabilityObservable> {
    void /* unknown type, empty encoding */ eventHubToken;
    void /* unknown type, empty encoding */ subscriptionClient;
    void /* unknown type, empty encoding */ contentAvailabilityClient;
}

@property (nonatomic) void /* unknown type, empty encoding */ availability;
@property (nonatomic, retain) void /* unknown type, empty encoding */ observers;

- (void)removeObserver:(id)a0;
- (void)update;
- (void)notifyObservers;
- (void)addObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDependenciesWrapper:(id)a0;

@end
