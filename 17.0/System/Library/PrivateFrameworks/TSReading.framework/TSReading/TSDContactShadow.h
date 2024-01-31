@interface TSDContactShadow : TSDShadow

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double perspective;

+ (id)contactShadowWithOffset:(double)a0 height:(double)a1 radius:(double)a2 opacity:(double)a3 color:(struct CGColor { } *)a4 enabled:(BOOL)a5;

- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)shadowType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInNaturalSpaceForRep:(id)a0;
- (double)clampOffset:(double)a0;
- (double)clampRadius:(double)a0;
- (id)initWithOffset:(double)a0 height:(double)a1 radius:(double)a2 opacity:(double)a3 color:(struct CGColor { } *)a4 enabled:(BOOL)a5;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)newShadowClampedForSwatches;
- (struct CGImage { } *)newShadowImageForRep:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (struct CGImage { } *)newShadowImageFromContext:(struct CGContext { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 unflipped:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
