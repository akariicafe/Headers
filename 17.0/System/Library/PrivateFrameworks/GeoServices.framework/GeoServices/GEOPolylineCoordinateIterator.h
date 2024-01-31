@interface GEOPolylineCoordinateIterator : NSObject {
    struct { unsigned int index; float offset; } _end;
}

@property (readonly, nonatomic) BOOL isCurrentValid;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } current;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } previous;

+ (id)iteratorWithRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a0;

- (id)initWithRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a0;
- (void)advance;

@end
