@class NSDictionary;

@interface TRIGenericUniqueRequiredAssets : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *cloudKit;
@property (readonly, nonatomic) NSDictionary *mobileAsset;

+ (id)assetsWithCloudKit:(id)a0 mobileAsset:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToAssets:(id)a0;
- (id)initWithCloudKit:(id)a0 mobileAsset:(id)a1;
- (id)copyWithReplacementMobileAsset:(id)a0;
- (id)description;
- (id)copyWithReplacementCloudKit:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
