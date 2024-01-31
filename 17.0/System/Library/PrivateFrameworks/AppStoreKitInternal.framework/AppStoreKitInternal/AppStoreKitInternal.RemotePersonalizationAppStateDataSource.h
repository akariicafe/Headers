@interface AppStoreKitInternal.RemotePersonalizationAppStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ registeredAdamIds;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ process;
}

- (id)init;
- (void)dealloc;
- (void)storeAccountDidChange;
- (void)registerPersonalizedAdamIds:(id)a0;
- (void).cxx_destruct;
- (void)didCompletePurchase:(id)a0;

@end
