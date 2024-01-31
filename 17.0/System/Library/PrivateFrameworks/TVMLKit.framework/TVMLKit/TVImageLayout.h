@class UIColor, NSString, NSShadow, IKColor, UIImageSymbolConfiguration, IKFourTuple;

@interface TVImageLayout : TVViewLayout

@property (copy, nonatomic) NSString *imageTreatment;
@property (retain, nonatomic) IKFourTuple *ikBorderRadius;
@property (copy, nonatomic) NSString *inlineTitle;
@property (nonatomic) BOOL allowsNonOpaqueShadows;
@property (nonatomic) BOOL useInSearchPartial;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } decoratorSize;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double upscaleFactor;
@property (nonatomic) double aspectRatio;
@property (nonatomic) long long scaleMode;
@property (nonatomic) struct TVCornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL continuousBorder;
@property (retain, nonatomic) IKColor *ikTintColor;
@property (retain, nonatomic) IKColor *ikDarkTintColor;
@property (retain, nonatomic) NSShadow *shadow;
@property (copy, nonatomic) NSString *placeholderArtworkName;
@property (copy, nonatomic) NSString *cropCode;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })_aspectFitToSize:(struct CGSize { double x0; double x1; })a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 aspectRatio:(double)a2;
- (double)defaultFocusSizeIncrease;

@end
