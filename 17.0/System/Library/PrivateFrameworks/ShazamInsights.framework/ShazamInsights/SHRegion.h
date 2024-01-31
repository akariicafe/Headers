@class NSString, CLLocation;

@interface SHRegion : NSObject

@property (readonly, copy, nonatomic) NSString *geohash;
@property (readonly, nonatomic) CLLocation *location;

- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithGeohash:(id)a0;

@end
