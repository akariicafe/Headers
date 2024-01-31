@interface GEOPolylineCoordinateRangeArray : NSObject <NSFastEnumeration, NSSecureCoding> {
    struct vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> { struct GEOPolylineCoordinateRange *__begin_; struct GEOPolylineCoordinateRange *__end_; struct __compressed_pair<GEOPolylineCoordinateRange *, std::allocator<GEOPolylineCoordinateRange>> { struct GEOPolylineCoordinateRange *__value_; } __end_cap_; } _polylineCoordinateRanges;
    unsigned long long _mutationsCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (void)addCoordinateRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })coordinateRangeAtIndex:(unsigned long long)a0;

@end
