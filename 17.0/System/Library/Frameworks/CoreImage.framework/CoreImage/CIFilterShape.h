@interface CIFilterShape : NSObject <NSCopying> {
    unsigned int _pad;
    void *_priv;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extent;

+ (id)_shapeInfinite;
+ (id)shapeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)dealloc;
- (id)description;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSRegionObject { } *)CGSRegion;
- (id)initWithStruct:(struct filterShape { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } *)a0;
- (id)insetByX:(int)a0 Y:(int)a1;
- (id)intersectWith:(id)a0;
- (id)intersectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)transformBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 interior:(BOOL)a1;
- (id)unionWith:(id)a0;
- (id)unionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
