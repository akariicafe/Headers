@class NSMutableArray;

@interface ADStreamSync : NSObject {
    NSMutableArray *_streamsHistory;
    unsigned long long *_historySizes;
    unsigned long long *_aggregationCounts;
    double *_allowedAggregationIntervals;
    double *_matchedTimestampsArray;
}

@property double allowedMatchTimeInterval;

- (long long)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStreamCount:(unsigned long long)a0 allowedMatchTimeInterval:(double)a1;
- (id)pushData:(id)a0 streamIndex:(unsigned long long)a1 timestamp:(double)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (id)pushData:(id)a0 streamIndex:(unsigned long long)a1 timestamp:(double)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 calibration:(id)a4;
- (long long)setStream:(unsigned long long)a0 queueSize:(unsigned long long)a1;
- (long long)setStream:(unsigned long long)a0 queueSize:(unsigned long long)a1 aggregationCount:(unsigned long long)a2 allowedAggregationInterval:(double)a3;
- (BOOL)areOldestMatchingObjectsInAllowedInterval:(unsigned long long)a0;
- (id)checkForMatch;
- (BOOL)checkOnceForMatch:(id *)a0;
- (id)createAndPopulateMatch;
- (void)dropOldFramesFromStream:(unsigned long long)a0 belowTimestampThreshold:(double)a1;
- (double)oldestAverageTimestampForStream:(unsigned long long)a0;
- (id)pushData:(id)a0 streamIndex:(unsigned long long)a1 timestamp:(double)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 calibration:(id)a4 meta:(id)a5;
- (id)pushData:(id)a0 streamIndex:(unsigned long long)a1 timestamp:(double)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 meta:(id)a4;
- (BOOL)streamContainsMinimalFrameCount:(unsigned long long)a0;

@end
