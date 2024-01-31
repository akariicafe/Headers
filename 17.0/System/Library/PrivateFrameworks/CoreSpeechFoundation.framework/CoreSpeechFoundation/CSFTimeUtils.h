@interface CSFTimeUtils : NSObject

+ (float)hostTimeToSeconds:(unsigned long long)a0;
+ (unsigned long long)secondsToHostTime:(float)a0;
+ (double)getHostClockFrequency;
+ (unsigned long long)absoluteHostTimeToContinuousHostTime:(unsigned long long)a0;
+ (unsigned long long)convertSampleCountToNs:(unsigned long long)a0 sampleRate:(float)a1;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)a0 anchorHostTime:(unsigned long long)a1 anchorSampleCount:(unsigned long long)a2 sampleRate:(float)a3;
+ (unsigned long long)hostTimeToNs:(unsigned long long)a0;
+ (double)hostTimeToTimeInterval:(unsigned long long)a0;
+ (BOOL)isReceivedTimeInterval:(double)a0 matchCurrentTimeInterval:(double)a1;
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)a0;
+ (unsigned long long)millisecondsToNs:(float)a0;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)a0 anchorHostTime:(unsigned long long)a1 anchorSampleCount:(unsigned long long)a2 sampleRate:(float)a3;
+ (unsigned long long)secondsToNs:(float)a0;

@end
