@class NSArray, PLBackgroundJobCriteria;

@interface PLBackgroundJobWorkerPendingWorkItems : NSObject

@property (readonly, copy, nonatomic) NSArray *workItemsNeedingProcessing;
@property (readonly, copy, nonatomic) PLBackgroundJobCriteria *criteria;

- (id)initWithZeroWorkItems;
- (void).cxx_destruct;
- (id)initWithCriteria:(id)a0 workItemsNeedingProcessing:(id)a1;

@end
