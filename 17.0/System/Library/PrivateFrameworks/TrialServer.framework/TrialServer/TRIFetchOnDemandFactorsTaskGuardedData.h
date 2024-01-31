@class NSMutableSet, NSError, NSMutableArray, NSDate;

@interface TRIFetchOnDemandFactorsTaskGuardedData : NSObject {
    NSMutableArray *fetchOperations;
    int overallStatus;
    NSDate *earliestRetryDate;
    NSError *fetchError;
    NSMutableSet *downloadableFactorNames;
}

- (id)description;
- (void).cxx_destruct;

@end
