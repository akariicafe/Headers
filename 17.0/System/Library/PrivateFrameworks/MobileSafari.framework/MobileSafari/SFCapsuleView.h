@class NSString, UIVisualEffectView, SFShadowView, UIView, _SFBarTheme, NSTimer;

@interface SFCapsuleView : UIView {
    UIView *_cachedContentView;
    BOOL _reloadingWithCoordinator;
    NSTimer *_waitToHighlight;
}

@property (class, readonly, nonatomic) NSString *maximumContentSizeCategory;

@property (readonly, nonatomic) UIView *contentContainer;
@property (nonatomic) double backgroundCornerRadius;
@property (nonatomic) double backgroundHeight;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) NSString *visualEffectGroupName;
@property (readonly, nonatomic) UIVisualEffectView *backgroundView;
@property (readonly, nonatomic) SFShadowView *shadowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *accessoryView;
@property (copy, nonatomic) NSString *reusableContentViewIdentifier;
@property (copy, nonatomic) id /* block */ contentViewUpdateHandler;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (retain, nonatomic) _SFBarTheme *minimizedTheme;
@property (nonatomic) BOOL forceMinimizedTheme;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) BOOL usesPlatterEffect;
@property (nonatomic) BOOL allowsHighlight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForShadowView;
@property (nonatomic, setter=setSelected:) BOOL isSelected;
@property (readonly, nonatomic) BOOL isMinimized;
@property (nonatomic) long long state;
@property (nonatomic) double minimizationPercent;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (nonatomic) unsigned long long directionalCollapsedContentEdge;

- (void)willChangeToMinimized:(BOOL)a0 coordinator:(id)a1;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_performHighlightAnimation;
- (void)_updateAccessoryTheme;
- (void)applyTheme;
- (void)_updateStateWithContentView:(id)a0;
- (void)_updateShadowViewTransform;
- (BOOL)_usesMinimizedTheme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentViewState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForContent;
- (unsigned long long)_collapsedContentInsetEdge;
- (void)setAccessoryView:(id)a0 coordinator:(id)a1;
- (void)allowsHighlight:(BOOL)a0;
- (void)willReloadWithCoordinator:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldFadeNonKeyContentForContentView:(id)a0 withPreviousContentView:(id)a1;
- (void)safeAreaInsetsDidChange;
- (unsigned long long)_accessoryEdge;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;

@end
