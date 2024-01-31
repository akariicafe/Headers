@class UIImage, UIBezierPath;

@interface MSPieImageView : UIView {
    UIBezierPath *_clipPath;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *foregroundImage;
@property (nonatomic) double pieFraction;
@property (nonatomic) double pieRadius;

- (void)dealloc;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reloadClipPath;

@end
