@class NSDictionary;

@interface VUIFeatureManager : NSObject

@property (retain, nonatomic) NSDictionary *features;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)availableFeatures;
- (BOOL)isFeatureEnabled:(id)a0;
- (id)_allFeatures;
- (BOOL)isDownloadPurchasesInAppFeatureEnabled;
- (id)osFeatureFlagsJSON;
- (void)setFeatureValue:(BOOL)a0 forFeature:(id)a1;
- (BOOL)useJetPackAssetSession;

@end
