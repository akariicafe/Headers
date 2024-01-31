@class UISegmentedControl;

@interface _HKTimeScopeControlBar : HKTimeScopeControl {
    UISegmentedControl *_segments;
}

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)minimumWidth;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelectedTimeScope:(long long)a0;
- (void)_rebuildSegments;
- (void)_segmentValueChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 timeScopes:(id)a1;
- (long long)selectedTimeScope;

@end
