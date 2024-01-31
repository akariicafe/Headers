@class CALayer, PHPerson;

@interface PXRoundImageView : UIImageView

@property (nonatomic) int currentRequestID;
@property (nonatomic) struct CGSize { double width; double height; } currentRequestSize;
@property (readonly, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) PHPerson *representedPerson;

- (double)displayScale;
- (void)_updateImageIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateCorner;
- (void)_updateImageForFaceCropRequestID:(int)a0 image:(id)a1 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forceUpdate:(BOOL)a3 error:(id)a4;

@end
