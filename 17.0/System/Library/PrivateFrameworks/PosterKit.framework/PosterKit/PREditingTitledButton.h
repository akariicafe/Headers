@class NSString;

@interface PREditingTitledButton : PREditingButton <UIPointerInteractionDelegate>

@property (class, readonly, nonatomic) long long editingTitledButtonType;
@property (class, readonly, copy, nonatomic) NSString *editingTitledButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *editingTitledButtonSymbolName;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultPreferredContentFittingSize;

@property (readonly, nonatomic) struct PREditingTitledButtonMetrics { double x0; double x1; double x2; double x3; } metrics;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentFittingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct PREditingTitledButtonMetrics { double x0; double x1; double x2; double x3; })defaultMetrics;
+ (id)_bestFontForTitle:(id)a0 inMaximumWidth:(double)a1 withMetrics:(struct PREditingTitledButtonMetrics { double x0; double x1; double x2; double x3; })a2 titleSize:(out struct CGSize { double x0; double x1; } *)a3 fontAttributes:(out id *)a4;
+ (id)bestFontForTitle:(id)a0 fittingInWidth:(double)a1;
+ (id)editingTitledButtonSymbolName:(BOOL)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)defaultContentImage;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)contentImageWithTitle:(id)a0;
- (void)setFrameFromVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
