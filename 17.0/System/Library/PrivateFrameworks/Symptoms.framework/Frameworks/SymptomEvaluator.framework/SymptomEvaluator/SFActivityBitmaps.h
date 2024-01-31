@class NSString;

@interface SFActivityBitmaps : NSObject {
    char _bitmapsBuffer[64];
}

@property unsigned long long wordOffset;
@property unsigned long long numOfWords;
@property (nonatomic) double lastSymptomReportTime;
@property (readonly, nonatomic) unsigned long long endTime;
@property (readonly, nonatomic) BOOL isUpdated;
@property (retain, nonatomic) NSString *appName;
@property unsigned long long startTime;

+ (void)adjustStartTime:(unsigned long long *)a0 endTime:(unsigned long long *)a1 currMachAbsTime:(unsigned long long)a2;
+ (unsigned long long)alignToBitmapTimeline:(unsigned long long)a0;

- (id)init;
- (void)clearAndSetNewActivityWithStartTime:(unsigned long long)a0 part1:(unsigned long long)a1 part:(unsigned long long)a2;
- (void)setActivityWithStartTime:(unsigned long long)a0 part1:(unsigned long long)a1 part2:(unsigned long long)a2;
- (void)setAlignedBitmap:(unsigned long long)a0 withStartTime:(unsigned long long)a1;
- (unsigned long long)adjustStartTime:(unsigned long long)a0;
- (void)resetAllActivities;
- (BOOL)_shouldInspectHammingWeight;
- (unsigned long long)getLongestContiguousHammingWeight;
- (BOOL)isOutdated:(unsigned long long)a0;
- (void)freeUpBufferSpace;
- (unsigned long long)getWordAtOffset:(unsigned long long)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (void)checkForFullHammingWeightOnWiFiAtTime:(double)a0;
- (unsigned long long)getAlignedBitmapStartingAtTime:(unsigned long long)a0;
- (void)_checkForFullHammingWeightOnInterface:(unsigned char)a0 atTime:(double)a1;
- (unsigned long long)getHammingWeight;
- (void).cxx_destruct;
- (void)addActivityWithFlowId:(unsigned long long)a0 startTime:(unsigned long long)a1 part1:(unsigned long long)a2 part2:(unsigned long long)a3;
- (BOOL)isEqual:(id)a0;
- (void)tallyUpHammingWeightTo:(id)a0;
- (id)getWrappedBitmapsFromTime:(unsigned long long)a0 toTime:(unsigned long long)a1;
- (void)writeWord:(unsigned long long)a0 atOffset:(unsigned long long)a1;
- (void)resetStartTimeToEarlierTime:(unsigned long long)a0;

@end
