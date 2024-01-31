@interface AMSBagPersistenceMetricsTracker : NSObject {
    void /* unknown type, empty encoding */ eventSender;
    void /* unknown type, empty encoding */ initialState;
}

+ (void)trackCachedValuesUnavailableWithRequestedValueCount:(long long)a0;
+ (id)trackerForCachedValuesCallWithRequestedValueCount:(long long)a0 cachedValueCount:(long long)a1 cachedBagWasExpired:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;

@end
