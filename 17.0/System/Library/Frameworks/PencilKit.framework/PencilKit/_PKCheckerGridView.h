@class UIImageView, UIColor;

@interface _PKCheckerGridView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double tileSize;
@property (retain, nonatomic) UIColor *colorA;
@property (retain, nonatomic) UIColor *colorB;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateUI;
- (id)initWithTileSize:(double)a0 colorA:(id)a1 colorB:(id)a2;
- (id)_createGridTileImage;

@end
