@class _UILegibilitySettings, CSPageControl, CSShakableView, SBUILegibilityLabel, SBUICallToActionLabel, UIView, SBFPagedScrollView;
@protocol SBUILegibility;

@interface CSFixedFooterView : CSCoverSheetViewBase {
    _UILegibilitySettings *_legibilitySettings;
}

@property (readonly, nonatomic) CSShakableView *callToActionShakeView;
@property (retain, nonatomic) SBUICallToActionLabel *callToActionLabel;
@property (retain, nonatomic) SBUILegibilityLabel *alternateCallToActionLabel;
@property (retain, nonatomic) UIView<SBUILegibility> *statusTextView;
@property (nonatomic) struct CGPoint { double x; double y; } statusTextViewOffset;
@property (nonatomic) double statusTextViewScale;
@property (readonly, nonatomic) CSPageControl *pageControl;
@property (weak, nonatomic) SBFPagedScrollView *trackingScrollViewForPageControl;

- (id)presentationRegions;
- (void)_addPageControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateViewsForLegibilitySettings;
- (void)_layoutCallToActionView;
- (void)_layoutPageControl;
- (void)updateForLegibilitySettings:(id)a0;
- (void).cxx_destruct;
- (void)_layoutStatusTextView;
- (void)layoutSubviews;
- (void)_addShakeView;
- (void)setStatusTextViewOffset:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (void)updatePageControl;

@end
