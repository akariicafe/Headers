@class TFFeedbackDataContainer, NSObject;
@protocol OS_dispatch_queue, TFDataAggregatorDelegate;

@interface TFDataAggregator : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *aggregationQueue;
@property (readonly, nonatomic) TFFeedbackDataContainer *sessionDataContainer;
@property (weak, nonatomic) id<TFDataAggregatorDelegate> delegate;

- (void).cxx_destruct;
- (void)_finishUpdatingDataContainer:(id)a0 byMergingDataContainer:(id)a1 forTasks:(id)a2;
- (id)_loadAndExtractDataForTasks:(id)a0 intoDataContainer:(id)a1;
- (void)_prepareDestinationDataContainer:(id)a0 forTasks:(id)a1;
- (void)_validateProvidedIdentifiersForTasks:(id)a0;
- (id)initWithSessionDataContainer:(id)a0;
- (void)runTasks:(id)a0;

@end
