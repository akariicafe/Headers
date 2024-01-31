@class _UIRefreshControlModernReplicatorView, _UIRefreshControlSeedView, UILabel, UIView;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {
    BOOL _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    _UIRefreshControlSeedView *_seed;
    BOOL _hasFinishedRevealing;
}

@property (nonatomic) BOOL areAnimationsValid;
@property (nonatomic) BOOL horizontallyCenteredFramesNeedUpdate;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) double currentPopStiffness;
@property (nonatomic) double impactIntensity;

- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_bloomedSeedTransform;
- (void)_cleanUpAfterRevealing;
- (void)_removeAllAnimations;
- (void)_resetToRevealingState;
- (void)_updateTimeOffsetOfRelevantLayers;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_currentTimeOffset;
- (void)_goAway;
- (void)setAttributedTitle:(id)a0;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)_setBloomedAppearance;
- (void)willTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_snappingMagic;
- (void)_tick;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_reveal;
- (void).cxx_destruct;
- (void)_bloom;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_unbloomedSeedTransform;
- (void)_spin;
- (double)maximumSnappingHeight;
- (double)_percentageShowing;
- (id)_effectiveTintColorWithAlpha:(double)a0;
- (void)_setUnbloomedAppearance;
- (long long)style;
- (void)layoutSubviews;
- (void)_unbloom;
- (id)_effectiveTintColor;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;
- (void)_tickDueToProgrammaticRefresh;
- (id)attributedTitle;
- (void)_setSpunAppearance;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
