@class NSMutableArray, NSHashTable;

@interface PXPhotosDetailsLoadCoordinator : NSObject

@property (readonly, nonatomic) NSHashTable *_tokens;
@property (readonly, nonatomic) NSMutableArray *_relatedBlocks;
@property (readonly, nonatomic) NSMutableArray *_suggestionsBlocks;
@property (nonatomic) double timeoutDelay;

+ (id)loadCoordinatorForContext:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_canPerformRelatedFetch;
- (BOOL)_canPerformSuggestionsFetch;
- (id)_createToken;
- (void)_tokenDidComplete:(id)a0;
- (void)performBlockWhenReadyToFetchRelated:(id /* block */)a0;
- (void)performBlockWhenReadyToFetchSuggestions:(id /* block */)a0;
- (id)tokenForCuratedFetch;
- (id)tokenForLivePhotoVariations;

@end
