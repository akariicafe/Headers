@class UIImage, UIImageView, PKWatchHeroImageView;

@interface PKHeroCardWatchExplainationHeaderView : UIView {
    UIImageView *_passImageView;
    PKWatchHeroImageView *_watchView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } recommendedCardImageSize;
@property (retain, nonatomic) UIImage *cardImage;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_deviceBackgroundColor;
- (BOOL)_isSmallPhone;

@end
