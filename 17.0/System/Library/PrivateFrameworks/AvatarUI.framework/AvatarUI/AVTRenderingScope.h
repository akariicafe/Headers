@class NSString, AVTAvatarPose;

@interface AVTRenderingScope : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) float sizeModifier;
@property (readonly, nonatomic) long long renderingType;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) AVTAvatarPose *pose;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

+ (id)gridThumbnailScope;
+ (id)largeThumbnailScope;
+ (double)extraMagnifyingFactorForFramingMode:(id)a0;
+ (id)funCamCarouselThumbnailScope;
+ (id)listControllerThumbnailScope;
+ (unsigned long long)scopeOptionsForEnvironment:(id)a0;
+ (id)simplePickerThumbnailScope;
+ (double)thumbnailHeightRatioForFramingMode:(id)a0;
+ (id)thumbnailScope;
+ (double)widthForRenderingType:(long long)a0 options:(unsigned long long)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)cacheableResourceAssociatedCost;
- (id)adaptedFramingModeForObjectType:(long long)a0;
- (id)cacheableResourceAssociatedIdentifier;
- (id)copyApplyingPoseOverride:(id)a0;
- (id)copyWithFramingMode:(id)a0;
- (id)copyWithPose:(id)a0;
- (id)copyWithSize:(struct CGSize { double x0; double x1; })a0 framingMode:(id)a1;
- (id)copyWithSizeModifier:(float)a0;
- (id)framingModeIdentifier;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1 options:(unsigned long long)a2;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1 options:(unsigned long long)a2 framingMode:(id)a3 pose:(id)a4;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1 options:(unsigned long long)a2 framingMode:(id)a3 pose:(id)a4 size:(struct CGSize { double x0; double x1; })a5;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1 options:(unsigned long long)a2 framingMode:(id)a3 pose:(id)a4 sizeModifier:(float)a5;

@end
