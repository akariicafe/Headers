@class NSDate;

@interface StopWatch : NSObject {
    NSDate *start;
    double cumul;
}

+ (BOOL)nearlyEqualRun:(double)a0 toRun:(double)a1 fudgeFactor:(double)a2;

- (void)start;
- (double)currentRun;
- (double)stop;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (double)total;
- (BOOL)wasRunningBefore:(id)a0;

@end
