@interface VNEspressoDetectedObject : NSObject

@property long long objectType;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) struct CGPoint { double x0; double x1; } center;
@property float confidence;

- (id)description;
- (id)initWithObjectType:(long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2;

@end
