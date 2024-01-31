@class CAMFocusIndicatorRectView, CAMExposureBiasSlider;
@protocol CAMFocusIndicatorViewDelegate;

@interface CAMFocusIndicatorView : UIView

@property (readonly, nonatomic) CAMFocusIndicatorRectView *_rectView;
@property (readonly, nonatomic) CAMExposureBiasSlider *_exposureBiasSlider;
@property (nonatomic) int _exposureBiasSide;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<CAMFocusIndicatorViewDelegate> delegate;
@property (nonatomic, getter=isInactive) BOOL inactive;
@property (nonatomic, getter=isPulsing) BOOL pulsing;
@property (nonatomic) BOOL showExposureBias;
@property (nonatomic) float exposureBiasMaximum;
@property (nonatomic) float exposureBiasMinimum;
@property (nonatomic) float exposureBiasValue;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithStyle:(long long)a0;
- (void)setExposureBiasSide:(int)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_layoutRectView:(id)a0;
- (void)_createRectViewAndUpdateBounds;
- (void)_layoutExposureBiasSlider;
- (void)_updateTintColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsIncludingExposureBiasSlider;
- (void).cxx_destruct;
- (void)_createExposureBiasSlider;
- (void)_commonCAMFocusIndicatorViewInitialization;
- (void)setStyle:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)layoutSubviews;
- (void)startScalingWithExpansionWidth:(double)a0 duration:(double)a1 repeatCount:(unsigned long long)a2;

@end
