@interface GeographicCoordinate : NSObject

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;

+ (id)fromECEFCoordinate:(id)a0;

- (id)initFromECEFCoordinate:(id)a0;
- (id)init;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 andAltitude:(double)a2;
- (void)setFromLatitude:(double)a0 longitude:(double)a1 andAltitude:(double)a2;
- (void)setFromECEFCoordinate:(id)a0;

@end
