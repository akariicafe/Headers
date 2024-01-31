@class BMMiningTaskConfig, _CDInteractionStore;

@interface BMInteractionProvider : NSObject

@property (retain, nonatomic) id contextKitClient;
@property (retain) BMMiningTaskConfig *bmMiningTaskConfig;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;

- (id)init;
- (id)initWithInteractionStore:(id)a0;
- (void).cxx_destruct;
- (id)batchFetchedPhotoSuggestionsForInteractions:(id)a0;
- (id)getResultsForRequest:(id)a0;
- (id)initWithBMMiningTaskConfig:(id)a0;
- (id)initWithInteractionStore:(id)a0 bmMiningTaskConfig:(id)a1;
- (id)interactionEventsForTypes:(id)a0 error:(id *)a1;

@end
