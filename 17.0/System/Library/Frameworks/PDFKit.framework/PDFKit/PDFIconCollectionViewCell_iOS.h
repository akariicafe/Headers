@class NSLayoutConstraint, UIImageView, UIView, PDFPage, UIButton;

@interface PDFIconCollectionViewCell_iOS : UICollectionViewCell {
    UIView *_overlayView;
    NSLayoutConstraint *_ratioConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
}

@property (retain, nonatomic) UIButton *actionsButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PDFPage *page;

- (void)setNeedsUpdate;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)setupSubviews;
- (void)setThumbnailHeight:(double)a0;
- (void)setThumbnailWidth:(double)a0;
- (void)updateOverlay;
- (void)updateAspectConstraintWithSize:(struct CGSize { double x0; double x1; })a0;

@end
