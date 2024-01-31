@class NSString, TRICKAssetMetadata;
@protocol TRIAssetId;

@interface TRIRequiredCloudKitAsset : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isOnDemand;
@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) TRICKAssetMetadata *metadata;

+ (id)assetWithFactorName:(id)a0 isInstalled:(BOOL)a1 isOnDemand:(BOOL)a2 assetId:(id)a3 metadata:(id)a4;

- (id)init;
- (unsigned long long)hash;
- (id)copyWithReplacementAssetId:(id)a0;
- (id)copyWithReplacementFactorName:(id)a0;
- (id)description;
- (id)copyWithReplacementIsOnDemand:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToAsset:(id)a0;
- (id)copyWithReplacementMetadata:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementIsInstalled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFactorName:(id)a0 isInstalled:(BOOL)a1 isOnDemand:(BOOL)a2 assetId:(id)a3 metadata:(id)a4;

@end
