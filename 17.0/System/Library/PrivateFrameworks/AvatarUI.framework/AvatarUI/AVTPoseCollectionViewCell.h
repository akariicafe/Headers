@class NSUUID, UIImageView, UIImage, CAShapeLayer, UIViewPropertyAnimator;

@interface AVTPoseCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *transitionImageView;
@property (retain, nonatomic) UIViewPropertyAnimator *scaleDownTransformAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *scaleUpWithBounceTransformAnimator;
@property (retain, nonatomic) NSUUID *contextIdentifier;

+ (struct CGPath { } *)selectionPathInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)updateImage:(id)a0 animated:(BOOL)a1;
- (void)cancelAnimations;

@end
