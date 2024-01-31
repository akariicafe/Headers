@class NSString, UIImageView, UIImage, CAShapeLayer, _NTKCFaceDetailCollectionCellLabel;

@interface _NTKCFaceDetailCollectionCell : UICollectionViewCell {
    UIImageView *_imageView;
    CAShapeLayer *_outlineView;
    _NTKCFaceDetailCollectionCellLabel *_label;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } swatchFrame;
@property (nonatomic) double outlineOutset;
@property (nonatomic) long long swatchImageContentMode;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long style;
@property (nonatomic) BOOL active;

+ (id)reuseIdentifier;
+ (double)outlineLineWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;

@end
