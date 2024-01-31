@class NSArray, NSMutableSet;

@interface HMEPendingTopicsCombiner : NSObject

@property (retain) NSMutableSet *addTopicFilters;
@property (retain) NSMutableSet *removeTopicFilters;
@property (readonly) NSArray *topicFiltersToAdd;
@property (readonly) NSArray *topicFiltersToRemove;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)combineOntoPreviousAdditions:(id)a0 removals:(id)a1;
- (void)combineWithAdditions:(id)a0 removals:(id)a1;

@end
