@class NSMutableDictionary;

@interface NetworkQualityExecutionsResult : NetworkQualityResult <NSCopying>

@property (retain) NSMutableDictionary *workingLatencyResults;
@property (retain) NSMutableDictionary *idleLatencyResults;
@property (retain) NSMutableDictionary *mutableURLSessionMetrics;

- (id)init;
- (void).cxx_destruct;

@end
