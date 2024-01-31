@interface PKPaymentSetupProductRegionDataComplexPolygon : NSObject {
    unsigned long long _inclusionaryPolygonCount;
    struct { struct *x0; unsigned long long x1; } *_inclusionaryPolygons;
    unsigned long long _exclusionaryPolygonCount;
    struct { struct *x0; unsigned long long x1; } *_exclusionaryPolygons;
}

- (void)dealloc;
- (double)closestDistanceToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 inExclusionaryRegion:(BOOL *)a1;
- (id)initWithInclusionaryZones:(id)a0 exclusionaryZones:(id)a1;

@end
