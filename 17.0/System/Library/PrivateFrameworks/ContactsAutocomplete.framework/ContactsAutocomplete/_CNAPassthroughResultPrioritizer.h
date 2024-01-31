@class NSString;

@interface _CNAPassthroughResultPrioritizer : NSObject <CNAutocompleteSuggestedResultPrioritization>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyPriorityOrderToResults:(id)a0 fetchRequest:(id)a1 andCompletePriorityResultsPromise:(id)a2;

@end
