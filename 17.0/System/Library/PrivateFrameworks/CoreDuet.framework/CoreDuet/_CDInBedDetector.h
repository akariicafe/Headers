@class NSObject;
@protocol OS_os_log, _DKKnowledgeQuerying;

@interface _CDInBedDetector : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain) id<_DKKnowledgeQuerying> knowledge;
@property unsigned long long method;

+ (id)inBedDetector;
+ (double)hoursOfSleepForResult:(id)a0;
+ (id)inBedDetectorWithKnowledge:(id)a0;
+ (id)inBedDetectorWithKnowledge:(id)a0 method:(unsigned long long)a1;
+ (id)simpleLockBasedInBedDetector;

- (void).cxx_destruct;
- (id)detectInBedBetweenBedtimeDate:(id)a0 wakupDate:(id)a1 error:(id *)a2;
- (id)detectInBedWithPolicyV1BetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)detectInBedWithPolicyV2BetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2 motionBased:(BOOL)a3;
- (id)findDateIntervalOfEventInStream:(id)a0 datePredicate:(id)a1 valuePredicate:(id)a2 sortDescriptor:(id)a3 error:(id *)a4;
- (id)findLastTimeDeviceWasLockedBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)findLatestEndOfMovementBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)findMotionTerminusBetweenStartDate:(id)a0 endDate:(id)a1 latest:(BOOL)a2 error:(id *)a3;
- (id)initWithKnowledge:(id)a0 method:(unsigned long long)a1;
- (id)lockedTimesBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)stationaryIntervalsBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
