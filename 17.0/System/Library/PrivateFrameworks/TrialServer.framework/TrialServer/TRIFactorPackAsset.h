@class NSString;
@protocol TRIAssetId, TRIFactorPackId;

@interface TRIFactorPackAsset : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId;

+ (id)assetWithFactorName:(id)a0 assetId:(id)a1 filePath:(id)a2 factorPackId:(id)a3;

- (id)init;
- (unsigned long long)hash;
- (id)copyWithReplacementAssetId:(id)a0;
- (id)copyWithReplacementFactorName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToAsset:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementFactorPackId:(id)a0;
- (id)copyWithReplacementFilePath:(id)a0;
- (id)initWithFactorName:(id)a0 assetId:(id)a1 filePath:(id)a2 factorPackId:(id)a3;

@end
