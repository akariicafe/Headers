@class NSString;
@protocol BLSHWatchdogDelegate, BLSHWatchdogAbortContext;

@interface BLSHWatchdogAbortParameters : NSObject

@property (weak, nonatomic) id<BLSHWatchdogDelegate> delegate;
@property (retain, nonatomic) id<BLSHWatchdogAbortContext> abortContext;
@property (nonatomic) BOOL isPotentialHang;
@property (nonatomic) BOOL hasSleepBeenRequested;
@property (nonatomic) BOOL sleepImminent;
@property (nonatomic) BOOL sleepImminentSinceScheduled;
@property (nonatomic) double timeInSleepImminent;
@property (copy, nonatomic) NSString *explanation;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 abortContext:(id)a1 isPotentialHang:(BOOL)a2 hasSleepBeenRequested:(BOOL)a3 sleepImminent:(BOOL)a4 sleepImminentSinceScheduled:(BOOL)a5 timeInSleepImminent:(double)a6 explanation:(id)a7;

@end
