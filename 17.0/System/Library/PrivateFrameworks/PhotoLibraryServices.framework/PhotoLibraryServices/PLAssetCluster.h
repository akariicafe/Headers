@class NSArray, CLLocation, NSDate;

@interface PLAssetCluster : NSObject

@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (id)mergedCluster:(id)a0;
+ (id)sortByTimeSortDescriptors;

- (id)initWithAssetsSortedByDate:(id)a0 region:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
