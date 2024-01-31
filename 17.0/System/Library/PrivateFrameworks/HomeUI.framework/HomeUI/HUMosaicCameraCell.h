@class UIView, HFItem, NADecayingTimer, NSArray, UIImageView, HUGridCellLayoutOptions, HUCameraView, HULegibilityLabel;

@interface HUMosaicCameraCell : HUGridCell {
    HFItem *_item;
    HUGridCellLayoutOptions *_layoutOptions;
}

@property (retain, nonatomic) HULegibilityLabel *timingLabel;
@property (retain, nonatomic) HULegibilityLabel *cameraNameLabel;
@property (retain, nonatomic) HUCameraView *cameraView;
@property (retain, nonatomic) UIImageView *recordingIndicatorImageView;
@property (retain, nonatomic) NSArray *allConstraints;
@property (retain, nonatomic) NADecayingTimer *timingLabelUpdateTimer;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (nonatomic) double currentCornerRadius;
@property (nonatomic) BOOL isSingleCell;
@property (retain, nonatomic) NSArray *legibilityLabelConstraints;
@property (nonatomic) double cameraViewAlpha;
@property (readonly, nonatomic) UIView *cameraContentView;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)legibilityLabel;
+ (Class)layoutOptionsClass;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutOptions;
- (void)updateConstraints;
- (void)setItem:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)item;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraViewFrame;
- (void)_animateTransitionWithView:(id)a0 animations:(id /* block */)a1;
- (void)_handleShouldDifferentiateWithoutColorDidChange;
- (void)_setupCommonCellAppearance;
- (id)_timingLabelText:(id)a0;
- (void)_updateCornerRadiusIfNeeded;
- (void)_updateRecordIndicatorColor;
- (void)_updateUIForSizeChange;
- (void)_updateViewCorners:(double)a0;
- (void)createLegibilityLabelsIfNecessary;
- (void)layoutOptionsDidChange;
- (void)setLayoutOptions:(id)a0;
- (BOOL)shouldDisplayAccessModeErrorContent;
- (BOOL)shouldDisplayErrorContent;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
