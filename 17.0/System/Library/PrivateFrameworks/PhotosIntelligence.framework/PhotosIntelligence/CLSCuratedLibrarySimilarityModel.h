@class NSString;

@interface CLSCuratedLibrarySimilarityModel : NSObject <CLSSimilarityModel>

@property (readonly) unsigned long long version;
@property (readonly) unsigned long long metric;
@property (readonly) double identicalSimilarityDistanceThreshold;
@property (readonly) double identicalSimilarityWithPeopleDistanceThreshold;
@property (readonly) double semanticalSimilarityDistanceThreshold;
@property (readonly) double semanticalSimilarityWithPeopleDistanceThreshold;
@property (readonly) double semanticalSimilarityWithPersonDistanceThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)latestVersion;
+ (id)name;

- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (void)setupVersion33;
- (void)setupVersion80;
- (void)setupVersion84;

@end
