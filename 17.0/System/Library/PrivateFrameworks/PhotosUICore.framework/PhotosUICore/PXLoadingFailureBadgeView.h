@class UIImage, UIImageView, NSError;

@interface PXLoadingFailureBadgeView : UIView

@property (nonatomic) long long sizeClass;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSError *error;

+ (id)_imageForSizeClass:(long long)a0;
+ (long long)_sizeClassForSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })sizeForSizeClass:(long long)a0;

- (void)_handleTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 error:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_handlePrimaryAction;
- (void)_installGestureRecognizers;

@end
