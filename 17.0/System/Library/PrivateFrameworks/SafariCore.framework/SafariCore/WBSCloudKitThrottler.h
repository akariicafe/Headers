@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

@property (weak, nonatomic) id<WBSCloudKitThrottlerDataStore> dataStore;

+ (BOOL)policyStringRepresentsValidPolicy:(id)a0;
+ (id)_distributionBucketsFromConfiguration:(id)a0;

- (id)init;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (BOOL)_throttlerIsActive;
- (void)_saveRecordOfPastOperations;
- (void)_addOperationAtDate:(id)a0;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (void)_loadRecordOfPastOperations;
- (void)reloadRecordOfPastOperations;
- (void)setPolicyString:(id)a0;
- (void)_pruneExpiredOrInvalidOperations;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (id)description;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (void).cxx_destruct;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (id)initWithPolicyString:(id)a0;
- (double)_test_numberOfSecondsToMonitor;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;

@end
