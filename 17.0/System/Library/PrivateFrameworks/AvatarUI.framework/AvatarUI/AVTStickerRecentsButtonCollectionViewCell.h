@class CAShapeLayer;

@interface AVTStickerRecentsButtonCollectionViewCell : AVTStickerRecentsStickerCollectionViewCell

@property (retain, nonatomic) CAShapeLayer *circularBackgroundLayer;

+ (id)identifier;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circleLayerRect;
- (void)updateWithDefaultImage;

@end
