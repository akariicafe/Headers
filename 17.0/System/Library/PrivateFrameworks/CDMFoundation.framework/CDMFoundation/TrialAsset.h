@class NSString, NSDictionary;

@interface TrialAsset : NSObject <NLAsset> {
    NSString *_namespaceName;
    NSString *_factorName;
    NSString *_path;
    NSDictionary *_assetMetadata;
    NSDictionary *_trialMetadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (long long)getAssetType;
- (id)getAssetSetName;
- (id)getAssetVersion;
- (void)appendPathWithServiceAssetFolder:(id)a0;
- (id)getAssetLocale;
- (id)getAssetMetadata;
- (id)getAssetPath;
- (id)getFactorName;
- (id)getNamespaceName;
- (id)initForFactor:(id)a0 inNamespace:(id)a1 withPath:(id)a2 withTrialMetadata:(id)a3;
- (void)processAssetLocaleInTrialMetadata;

@end
