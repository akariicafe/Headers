@class UIColor, UIImageView, _UICutoutShadowView, UIActionSheet, UIPopoverController, UIView, UIPopoverBackgroundView;

@interface _UIPopoverView : UIView {
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    UIView *_clipView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
}

@property (nonatomic) BOOL showsBackgroundComponentHighlights;
@property (nonatomic) BOOL showsBackgroundViewHighlight;
@property (nonatomic) BOOL showsContentViewHighlight;
@property (readonly, nonatomic) BOOL contentExtendsOverArrow;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (nonatomic) BOOL chromeHidden;
@property (nonatomic) BOOL chromeHiddenForSizeTransition;
@property (retain, nonatomic) _UICutoutShadowView *shadowView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double animationOvershootHeight;
@property (retain, nonatomic) UIActionSheet *presentedActionSheet;
@property (nonatomic) UIPopoverController *popoverController;

+ (id)popoverViewContainingView:(id)a0;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)willMoveToWindow:(id)a0;
- (void)_performBlockCheckingDefinesTintColor:(id /* block */)a0;
- (int)_style;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (id)toolbarShine;
- (id)standardChromeView;
- (void)_updateAlphaForChromeHidden;
- (BOOL)_definesTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contentView;
- (BOOL)_allowsCustomizationOfContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundViewClass:(Class)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_snapshotBounds;
- (void)_setCornerRadius:(double)a0;
- (void)_showArrow;
- (id)backgroundView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)_normalInheritedTintColor;
- (void)_layoutToolbarShine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundViewClass:(Class)a1 embeddedInView:(BOOL)a2 contentExtendsOverArrow:(BOOL)a3;
- (void).cxx_destruct;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_setPopoverContentView:(id)a0;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowOffset:(double)a1;
- (void)setUseToolbarShine:(BOOL)a0;
- (void)_hideArrow;

@end
