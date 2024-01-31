@interface ASCFixedCornerRadiusOfferBackgroundStyle : ASCOfferBackgroundStyle

@property (readonly, nonatomic) double cornerRadius;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCornerRadius:(double)a0;
- (double)cornerRadiusForImageSize:(struct CGSize { double x0; double x1; })a0 stretchableArea:(double)a1;

@end
