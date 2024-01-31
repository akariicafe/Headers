@class SFNavigationBarItem, NSString, NSArray, SFUnifiedBarMetrics, UILabel, SFUnifiedBarTheme;

@interface SFLockdownStatusBar : UIView <SFNavigationBarItemObserver, SFUnifiedBarContentView> {
    UILabel *_lockdownModeStatusLabel;
    long long _currentLockdownStatus;
}

@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem;
@property (nonatomic) BOOL shouldAnimateNavigationBarItemChanges;
@property (readonly, nonatomic) double titleCapHeightInsetFromTop;
@property (readonly, nonatomic) double titleBaselineInsetFromBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (nonatomic) double barBackgroundAlpha;
@property (readonly, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property (readonly, nonatomic, getter=isContentHidden) BOOL contentHidden;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) struct CGPoint { double x0; double x1; } midpointForCenteredContent;
@property (nonatomic) BOOL pinsScrollPositionToTrailingEdgeDuringResize;
@property (readonly, nonatomic) double preferredTopSpacing;
@property (readonly, nonatomic) double preferredBottomSpacing;
@property (readonly, nonatomic) BOOL showsSquishedContent;
@property (readonly, nonatomic) double preferredSquishedBottomSpacing;
@property (readonly, nonatomic) double topSquishedSpacingAdjustment;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) double squishTransformFactor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } squishedContentInset;
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (nonatomic) BOOL showsSquishedAccessoryViews;
@property (nonatomic) double themeColorVisibility;
@property (readonly, nonatomic) BOOL isCurrentlyScrollable;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateLabelWithLockdownStatus:(long long)a0;
- (void)_updateLockdownStatusLabel;
- (void)_updateLockdownStatusLabelAnimated:(BOOL)a0;
- (void)navigationBarItemDidUpdateLockdownModeAnnotation:(id)a0;

@end
