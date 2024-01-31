@class NSString;

@interface MKMultiPoint : MKShape <MKGeoJSONObject> {
    struct { double x0; double x1; } *_points;
    double *_elevations;
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _calculatedMapPointsLength;
    double _mapPointsLength;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _calculatedSelfIntersecting;
    BOOL _selfIntersecting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long pointCount;

- (void)dealloc;
- (struct { double x0; double x1; } *)points;
- (void)encodeWithCoder:(id)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })boundingMapRect;
- (void)_calculateBounds;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id)_initWithGeoJSONObject:(id)a0 error:(id *)a1;
- (BOOL)_determineSelfIntersecting;
- (id)initWithCoder:(id)a0;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)_assignPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (BOOL)_isSelfIntersecting;
- (double)_mapPointsLength;
- (void)_pointsDidChange;
- (void)_setBounds:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 elevations:(const double *)a1 count:(unsigned long long)a2;
- (void)_setPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)_wrapAroundTheDateline:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 elevations:(const double *)a1 count:(unsigned long long)a2;
- (double *)elevations;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)locationAtPointIndex:(unsigned long long)a0;
- (id)locationsAtPointIndexes:(id)a0;

@end
