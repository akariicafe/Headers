@class CKAnimatedImage;

@interface CKBrowserDraggedSticker : NSObject

@property (readonly, nonatomic) CKAnimatedImage *animatedImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double rotationAngle;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnimatedImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 rotationAngle:(double)a3;

@end
