@interface ASCOfferBackgroundStyle : NSObject

+ (id)defaultStyle;
+ (id)fixedCornerRadiusStyle:(double)a0;

- (id)init;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)cornerRadiusForImageSize:(struct CGSize { double x0; double x1; })a0 stretchableArea:(double)a1;

@end
