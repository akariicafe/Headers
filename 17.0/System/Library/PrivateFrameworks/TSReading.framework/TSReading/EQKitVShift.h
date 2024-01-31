@class EQKitBox;

@interface EQKitVShift : EQKitBox

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) double offset;

- (double)depth;
- (id)init;
- (void)dealloc;
- (double)height;
- (id)description;
- (double)width;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithBox:(id)a0 offset:(double)a1;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
