@interface WKUIAssetLoadStatusProvider : NSObject {
    void /* unknown type, empty encoding */ bundleReason;
    void /* unknown type, empty encoding */ workoutIdentifier;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ assetClient;
    void /* unknown type, empty encoding */ bundleUpdatedSubscriptionToken;
    void /* unknown type, empty encoding */ bundleProgressSubscriptionToken;
    void /* unknown type, empty encoding */ observers;
}

@property (nonatomic) void /* unknown type, empty encoding */ assetLoadStatus;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkoutIdentifier:(id)a0 dependencies:(id)a1 assetLoadStatus:(long long)a2 bundleReason:(long long)a3;

@end
