@class UIColor, NSString;

@interface PUPhotoEditTitledNotchButton : PUPhotoEditNotchButton <UIPointerInteractionDelegate>

@property (class, readonly, nonatomic) long long editingTitledButtonType;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultPreferredContentFittingSize;

@property (readonly, nonatomic) struct PUPhotoEditTitledNotchButtonMetrics { double x0; double x1; double x2; double x3; } metrics;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentFittingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct PUPhotoEditTitledNotchButtonMetrics { double x0; double x1; double x2; double x3; })defaultMetrics;
+ (id)_bestFontForTitle:(id)a0 inMaximumWidth:(double)a1 withMetrics:(struct PUPhotoEditTitledNotchButtonMetrics { double x0; double x1; double x2; double x3; })a2 titleSize:(out struct CGSize { double x0; double x1; } *)a3 fontAttributes:(out id *)a4;
+ (id)bestFontForTitle:(id)a0 fittingInWidth:(double)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)largeContentImage;
- (id)largeContentTitle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)defaultContentImage;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)contentImageWithTitle:(id)a0;
- (void)setFrameFromVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1 fallbackSymbolName:(id)a2;

@end
