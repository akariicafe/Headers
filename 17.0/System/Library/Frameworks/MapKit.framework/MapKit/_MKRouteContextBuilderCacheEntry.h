@class NSArray;

@interface _MKRouteContextBuilderCacheEntry : NSObject

@property (retain, nonatomic) NSArray *routeIDs;
@property (retain, nonatomic) NSArray *overlapResults;
@property (retain, nonatomic) NSArray *overlappingSections;

- (void).cxx_destruct;
- (id)initWithRoutes:(id)a0;

@end
