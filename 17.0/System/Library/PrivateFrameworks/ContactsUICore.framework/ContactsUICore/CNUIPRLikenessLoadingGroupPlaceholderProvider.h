@interface CNUIPRLikenessLoadingGroupPlaceholderProvider : CNUIPRLikenessLoadingPlaceholderProvider

@property (readonly, nonatomic) unsigned long long backgroundStyle;

- (id)initWithBackgroundStyle:(unsigned long long)a0;
- (struct CGImage { } *)renderCircularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)renderRoundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
