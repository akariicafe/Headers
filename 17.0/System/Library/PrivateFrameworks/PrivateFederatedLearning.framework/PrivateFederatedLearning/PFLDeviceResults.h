@class NSString, NSDictionary, NSURL, NSData, NSArray;

@interface PFLDeviceResults : NSObject

@property (retain, nonatomic) NSURL *flattenedPrivatizedWeightDataURL;
@property (retain, nonatomic) NSData *flattenedPrivatizedWeightData;
@property (nonatomic) long long flattenedPrivatizedWeightCount;
@property (retain, nonatomic) NSString *flattenedPrivatizedWeightType;
@property (retain, nonatomic) NSDictionary *metricsMap;
@property (nonatomic) long long modelVersion;
@property (retain, nonatomic) NSString *replayIdentifier;
@property (nonatomic) long long schemaVersion;
@property (nonatomic) long long shuffleId;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) double accuracy;
@property (nonatomic) double loss;
@property (readonly, nonatomic) NSArray *flattenedMetricsMap;

- (void).cxx_destruct;
- (id)flattenedMetricsMap;

@end
