@class UIColor, NSString, UIImageView, UIImage;

@interface CKAttributionImageView : UICollectionReusableView

@property (class, readonly, nonatomic) NSString *reuseIdentifier;
@property (class, readonly, nonatomic) NSString *supplementaryViewKind;

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) UIImageView *imageView;

+ (struct CGSize { double x0; double x1; })preferredSizeForImage:(id)a0;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setImage:(id)a0 imageTintColor:(id)a1;

@end
