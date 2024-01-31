@class PXGradientView, PXStoryTVWatchNextCellConfiguration, UIImageView, UILabel, _PXStoryShapeView;

@interface PXStoryTVWatchNextCellView : PXGFocusEffectView {
    PXGradientView *_gradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_countdownImage;
    _PXStoryShapeView *_countdownRing;
}

@property (copy, nonatomic) PXStoryTVWatchNextCellConfiguration *userData;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
