@interface SMCAMetricCacheUpdate : NSObject

@property (nonatomic) double averageDistanceBetweenLocationsInTrace;
@property (nonatomic) double averageHuncForLocationsInTrace;
@property (nonatomic) double averageTimeBetweenLocationsInTrace;
@property (nonatomic) double maxDistanceBetweenLocationsInTrace;
@property (nonatomic) double maxHuncForLocationsInTrace;
@property (nonatomic) double maxTimeBetweenLocationsInTrace;
@property (nonatomic) double minDistanceBetweenLocationsInTrace;
@property (nonatomic) double minHuncForLocationsInTrace;
@property (nonatomic) double minTimeBetweenLocationsInTrace;
@property (nonatomic) long long numLocationsInTrace;
@property (nonatomic) double cacheSize;

- (id)init;

@end
