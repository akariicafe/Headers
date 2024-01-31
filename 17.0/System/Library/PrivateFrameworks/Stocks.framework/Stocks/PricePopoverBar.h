@class UIColor, UIImageView, UIImage, UILabel;

@interface PricePopoverBar : UIView {
    UILabel *_priceLabel;
    UILabel *_percentChangeLabel;
    UIImage *_backgroundImage;
    UIImageView *_priceChangeSignView;
    UIImageView *_percentChangeSignView;
}

@property (retain, nonatomic) UIColor *imageMaskColor;

- (void)sizeToFit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPriceString:(id)a0;
- (void)setChangeImage:(id)a0;
- (id)initWithBackgroundImage:(id)a0;
- (void)setPercentChange:(id)a0;

@end
