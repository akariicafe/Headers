@interface ARSkipTileBounds : NSObject {
    double _minLatitude;
    double _maxLatitude;
    double _minLongitude;
    double _maxLongitude;
}

+ (double)_normalizeLongitude:(double)a0;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)isInside:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
