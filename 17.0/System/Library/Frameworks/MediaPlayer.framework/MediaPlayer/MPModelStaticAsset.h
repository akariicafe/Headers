@class NSURL;

@interface MPModelStaticAsset : MPModelObject

@property (nonatomic) double duration;
@property (nonatomic) long long flavorType;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSURL *url;

+ (id)__mediaType_KEY;
+ (void)__MPModelPropertyStaticAssetDuration__MAPPING_MISSING__;
+ (void)__MPModelPropertyStaticAssetFlavorType__MAPPING_MISSING__;
+ (void)__MPModelPropertyStaticAssetMediaType__MAPPING_MISSING__;
+ (void)__MPModelPropertyStaticAssetURL__MAPPING_MISSING__;
+ (id)__duration_KEY;
+ (id)__flavorType_KEY;
+ (id)__url_KEY;

@end
