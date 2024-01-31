@interface JFXEffectAssetFilteringOptions : NSObject <NSCopying>

@property (nonatomic) long long contentType;
@property (nonatomic) long long aspectRatio;
@property (nonatomic) long long usageMode;
@property (nonatomic) long long colorDynamicRange;
@property (nonatomic) long long quality;
@property (nonatomic) long long filteringMode;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
