@interface GEOComposedGeometryRouteTrafficColors : NSObject

@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)initWithColors:(unsigned int *)a0 offsets:(unsigned int *)a1 count:(unsigned long long)a2;

@end
