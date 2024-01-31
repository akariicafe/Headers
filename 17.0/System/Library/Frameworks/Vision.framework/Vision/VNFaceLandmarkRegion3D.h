@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion

@property void *points;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void /* unknown type, empty encoding */)pointAtIndex:(unsigned long long)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 points:(void *)a2 pointCount:(unsigned long long)a3;

@end
