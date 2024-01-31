@class PHAsset;

@interface PUActivityAssetItem : NSObject <NSCopying>

@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL excludeLiveness;
@property (nonatomic) BOOL excludeLocation;
@property (nonatomic) BOOL excludeCaption;
@property (nonatomic) BOOL excludeAccessibilityDescription;

+ (id)itemsForAssets:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)localIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToActivityAssetItem:(id)a0;

@end
