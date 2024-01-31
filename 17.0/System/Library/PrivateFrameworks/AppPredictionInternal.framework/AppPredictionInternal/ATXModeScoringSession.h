@class NSArray, ATXModeEntityAffinityVector, ATXModeEntityStore;

@interface ATXModeScoringSession : NSObject

@property (readonly, nonatomic) double startTimestamp;
@property (readonly, nonatomic) double endTimestamp;
@property (readonly, nonatomic) NSArray *appLaunches;
@property (retain, nonatomic) ATXModeEntityAffinityVector *sessionAffinityVector;
@property (readonly, nonatomic) ATXModeEntityStore *modeEntityStore;

+ (id)coalesceSessions:(id)a0 modeEntityStore:(id)a1;

- (void).cxx_destruct;
- (double)duration;
- (BOOL)isStronglyCorrelatedWithTopMode;
- (unsigned long long)topMode;
- (id)_initFromStartTime:(double)a0 endTime:(double)a1 modeEntityStore:(id)a2 appLaunches:(id)a3 sessionAffinityVector:(id)a4;
- (void)_populateAffinity;
- (id)_weightForLaunch:(id)a0;
- (double)affinityForMode:(unsigned long long)a0;
- (void)debug_prettyPrintSession:(BOOL)a0;
- (BOOL)hasModeWithinRank:(unsigned long long)a0 rank:(unsigned long long)a1;
- (id)initFromStartTime:(double)a0 endTime:(double)a1 modeEntityStore:(id)a2;
- (BOOL)isLabeled;
- (double)numScoredAppLaunches;
- (void)populateAppLaunches:(id)a0;
- (double)secondsUntilOtherSession:(id)a0;

@end
