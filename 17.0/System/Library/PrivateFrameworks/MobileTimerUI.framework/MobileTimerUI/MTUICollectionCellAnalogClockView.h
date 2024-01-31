@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView

+ (double)hourHandWidth;
+ (double)overSecondHandDotSize;
+ (struct CGPoint { double x0; double x1; })handRotationalCenterForHand:(long long)a0;
+ (double)secondHandOverhangLength;
+ (double)overHourHandDotSize;
+ (double)hourHandLength;
+ (double)faceRadius;
+ (id)makeClockFaceForDaytime:(BOOL)a0;
+ (double)secondHandWidth;
+ (long long)style;
+ (double)minuteHandLength;
+ (BOOL)shouldCacheImageOnDiskForType:(int)a0 dayTime:(BOOL)a1;
+ (double)minuteHandWidth;
+ (double)secondHandMainLength;

- (double)updateInterval;
- (double)coarseUpdateInterval;

@end
