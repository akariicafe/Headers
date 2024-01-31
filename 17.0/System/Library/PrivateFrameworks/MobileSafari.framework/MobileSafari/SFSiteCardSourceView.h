@class NSString, UIImageView, UIImage, UILabel, NSLayoutConstraint;

@interface SFSiteCardSourceView : UIVisualEffectView {
    UIImageView *_imageView;
    UILabel *_label;
    NSLayoutConstraint *_imageBaselineAlignmentConstraint;
    NSLayoutConstraint *_imageCenterAlignmentConstraint;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
