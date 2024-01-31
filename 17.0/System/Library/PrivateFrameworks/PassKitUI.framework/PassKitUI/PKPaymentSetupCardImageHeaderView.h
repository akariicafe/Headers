@class NSString, UIImageView, UIImage, UILabel;

@interface PKPaymentSetupCardImageHeaderView : UICollectionReusableView {
    UIImage *_image;
    UIImageView *_passView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSString *_title;
    NSString *_subtitle;
}

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })_imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createSubviews;
- (double)_leadingPadding;
- (void)configureWithUIImage:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
