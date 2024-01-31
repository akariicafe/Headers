@interface WebEventRegion : NSObject <NSCopying> {
    struct CGPoint { double x; double y; } p1;
    struct CGPoint { double x; double y; } p2;
    struct CGPoint { double x; double y; } p3;
    struct CGPoint { double x; double y; } p4;
}

- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct FloatQuad { struct FloatPoint { float x0; float x1; } x0; struct FloatPoint { float x0; float x1; } x1; struct FloatPoint { float x0; float x1; } x2; struct FloatPoint { float x0; float x1; } x3; })quad;
- (id)initWithPoints:(struct CGPoint { double x0; double x1; })a0 :(struct CGPoint { double x0; double x1; })a1 :(struct CGPoint { double x0; double x1; })a2 :(struct CGPoint { double x0; double x1; })a3;
- (struct CGPoint { double x0; double x1; })p1;
- (struct CGPoint { double x0; double x1; })p2;
- (struct CGPoint { double x0; double x1; })p3;
- (struct CGPoint { double x0; double x1; })p4;

@end
