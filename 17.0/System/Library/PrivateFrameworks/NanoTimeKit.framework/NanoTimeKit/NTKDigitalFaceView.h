@class NTKDigitalTimeLabel;

@interface NTKDigitalFaceView : NTKFaceView

@property (readonly, nonatomic) NTKDigitalTimeLabel *timeView;
@property (nonatomic) long long viewMode;

- (void)layoutSubviews;
- (void)invalidateDigitalTimeLabelStyle;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_createTimeViewIfNecessary;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)a0 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_loadSnapshotContentViews;
- (unsigned long long)_timeLabelOptions;
- (BOOL)_timeLabelUsesLegibility;
- (void)_unloadSnapshotContentViews;
- (void)setViewMode:(long long)a0 updateTimeViewStyle:(BOOL)a1;

@end
