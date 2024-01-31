@class NSArray, NSDictionary, TRIClient, NSLocale;

@interface LRRCdmTrialAssetManager : NSObject {
    TRIClient *_nlTRIClient;
    NSArray *_namespaces;
    NSDictionary *_trialCompatibilityVersions;
    NSDictionary *_trialIdentifiers;
}

@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (void)initTRIClient;
- (id)fetchRolloutStatusForNamespace:(id)a0;
- (id)fetchCompatibilityVersion;
- (unsigned int)fetchCompatibilityVersionForNamespace:(id)a0;
- (id)fetchRolloutStatus;
- (id)getAssetInfo:(id)a0;
- (id)initWithLocale:(id)a0 forNamespaces:(id)a1;

@end
