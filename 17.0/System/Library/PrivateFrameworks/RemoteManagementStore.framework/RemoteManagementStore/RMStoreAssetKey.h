@class NSString;

@interface RMStoreAssetKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (readonly, copy, nonatomic) NSString *assetServerToken;

+ (id)newAssetKey:(id)a0;
+ (id)newAssetKeyWithAsset:(id)a0;
+ (id)newAssetKeyWithAssetIdentifier:(id)a0 assetServerToken:(id)a1;

- (unsigned long long)hash;
- (id)initWithAsset:(id)a0;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetIdentifier:(id)a0 assetServerToken:(id)a1;
- (id)initWithAssetKey:(id)a0;

@end
