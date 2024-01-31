@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ urlSession;
}

- (id)init;
- (void)clearCacheAndNotify;
- (void)requestGeoClassificationFor:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)requestFeatureWithId:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)getFeatureEligibilityFor:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;

@end
