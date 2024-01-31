@class NSString, PHASEAssetRegistry;

@interface PHASEAsset : NSObject

@property (weak) PHASEAssetRegistry *assetRegistry;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly) NSString *uid;
@property (readonly) NSString *owningDataBundleIdentifier;
@property (readonly) NSString *identifier;

+ (id)new;

- (id)init;
- (id)uid;
- (void)setUid:(id)a0;
- (void).cxx_destruct;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;
- (void)setOwningDataBundleIdentifier:(id)a0;

@end
