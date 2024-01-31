@class NSUUID, NSArray;

@interface MNRouteDivergenceResults : NSObject

@property (retain, nonatomic) NSUUID *routeID;
@property (retain, nonatomic) NSArray *results;

- (id)description;
- (void).cxx_destruct;

@end
