@class NSString, NSMutableArray, NSMutableIndexSet;

@interface _CNForkJoinWhenCompleteResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {
    NSMutableArray *_results;
    NSMutableIndexSet *_finishedObservables;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
