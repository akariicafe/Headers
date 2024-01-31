@interface GEOConnectivityJunction : NSObject {
    struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *_junction;
}

@property (readonly, nonatomic) unsigned int pointsOnRoadCount;
@property (readonly, nonatomic) unsigned int pointsOnRoadIndex;

- (id)init:(struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *)a0;

@end
