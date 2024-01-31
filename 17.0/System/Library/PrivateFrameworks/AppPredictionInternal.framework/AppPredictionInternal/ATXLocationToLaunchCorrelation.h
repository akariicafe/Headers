@class _PASLock;

@interface ATXLocationToLaunchCorrelation : NSObject <NSCopying, NSSecureCoding> {
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (double)_totalLaunchesAtLocation:(id)a0 locationTotals:(id)a1;
+ (double)_launchProbabilityForEvent:(id)a0 atLocation:(id)a1 correlationMatrix:(id)a2 locationTotals:(id)a3;
+ (double)_totalLaunchesForEvent:(id)a0 atLocation:(id)a1 correlationMatrix:(id)a2;

- (double)totalLaunchesAtLocation:(id)a0;
- (id)init;
- (double)launchProbabilityForEvent:(id)a0 atLocationsWithProbabilities:(id)a1;
- (double)launchProbabilityForEvent:(id)a0 atLocation:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCorrelationMatrix:(id)a0 locationTotals:(id)a1;
- (void)addVisitForLocation:(id)a0 event:(id)a1 value:(double)a2;
- (double)totalLaunches;
- (void).cxx_destruct;
- (double)totalLaunchesForEvent:(id)a0 atLocation:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
