@class NSDictionary, NSMutableDictionary;

@interface _PSHistogramFeatureData : NSObject

@property (retain, nonatomic) NSDictionary *cache;
@property (retain, nonatomic) NSDictionary *bucketSums;
@property (retain, nonatomic) NSDictionary *bucketHasEver;
@property (retain, nonatomic) NSDictionary *factorToUniqueBucketNames;
@property (retain, nonatomic) NSMutableDictionary *candidateTimeIntervalSums;

- (void).cxx_destruct;

@end
