@interface GEOViewportFrame : NSObject

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) float heading;
@property (readonly, nonatomic) float pitch;
@property (readonly, nonatomic) float distance;

- (id)initWithAltitude:(double)a0 latitude:(double)a1 longitude:(double)a2 heading:(float)a3 pitch:(float)a4 distance:(float)a5;
- (id)initWithGEOPDViewportFrame:(id)a0;

@end
