@interface WFOverlayImageTransform : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double opacity;

- (id)init;
- (void)applyToImageFile:(id)a0 withOverlayImage:(id)a1 completionHandler:(id /* block */)a2;
- (id)initForCenteringImage:(id)a0 inBackgroundImage:(id)a1;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 scale:(double)a3 opacity:(double)a4;

@end
