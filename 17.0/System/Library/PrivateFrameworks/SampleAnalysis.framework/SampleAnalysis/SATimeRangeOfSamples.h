@class SATimestamp;

@interface SATimeRangeOfSamples : NSObject

@property (retain) SATimestamp *startTime;
@property (retain) SATimestamp *endTime;
@property unsigned long long startSampleIndex;
@property unsigned long long endSampleIndex;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 startSampleIndex:(unsigned long long)a2 endSampleIndex:(unsigned long long)a3;

@end
