@class NSString, NSDictionary;

@interface UAFNLAsset : NSObject <NLAsset> {
    NSString *_factorName;
    NSString *_path;
    NSString *_assetSetName;
    NSDictionary *_assetMetadata;
    NSString *_assetLocale;
    NSString *_assetVersion;
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
- (id)initForFactor:(id)a0 withPath:(id)a1 withAssetSetName:(id)a2 withUAFMetadata:(id)a3;
- (void)processUAFMetadata:(id)a0;

@end
