@class UIColor;

@interface PUPhotoDecoration : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) UIColor *foregroundColor;

+ (id)defaultDecoration;

- (unsigned long long)hash;
- (id)photoDecorationVariantsWithIncreasingAlpha:(long long)a0;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
