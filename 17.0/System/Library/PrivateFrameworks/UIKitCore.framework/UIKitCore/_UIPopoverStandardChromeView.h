@class UIColor, UIView;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    unsigned long long _arrowDirection;
    double _arrowOffset;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) BOOL useShortMode;
@property (nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (readonly, nonatomic) UIColor *contentBlendingColor;
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow;

+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (Class)legacyChromeViewClass;
+ (Class)standardChromeViewClass;

- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (unsigned long long)arrowDirection;
- (BOOL)usesImagesForShapeMasking;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setArrowOffset:(double)a0;
- (double)minNonPinnedOffset;
- (BOOL)isPinned;
- (double)maxNonPinnedOffset;
- (double)arrowOffset;
- (void).cxx_destruct;
- (void)setArrowDirection:(unsigned long long)a0;
- (long long)_resolvedBackgroundStyle;
- (BOOL)_shouldUseEqualContentInsetsOnAllSides;
- (void)_updateArrowImages;
- (BOOL)isRightArrowPinnedToBottom;
- (BOOL)isRightArrowPinnedToTop;
- (BOOL)wouldPinForOffset:(double)a0;

@end
