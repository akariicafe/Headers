@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (id)firstDate;
- (id)init;
- (id)lastDate;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLocations:(id)a0;
- (double)duration;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;

@end
