@class NSString, NSDictionary;

@interface CustomAsset : NSObject <NLAsset> {
    NSString *_path;
    NSString *_version;
    NSDictionary *_assetMetadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
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

@end
