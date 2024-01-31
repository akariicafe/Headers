@class UIColor, NSString, CKAttributionCountView, UIImage, CKAttributionImageView;

@interface CKAttributionImageAndCountView : UICollectionReusableView

@property (class, readonly, nonatomic) NSString *reuseIdentifier;
@property (class, readonly, nonatomic) NSString *supplementaryViewKind;

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIColor *imageTintColor;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) CKAttributionCountView *countView;
@property (readonly, nonatomic) CKAttributionImageView *imageView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setImage:(id)a0 imageTintColor:(id)a1 count:(long long)a2;

@end
