@class MapsSuggestionsManager, NSString, NSMutableSet, NSMutableArray;

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy> {
    NSMutableSet *_preFilters;
    NSMutableArray *_improvers;
    NSMutableArray *_dedupers;
    NSMutableSet *_postFilters;
    NSMutableArray *_previousResults;
}

@property (weak, nonatomic) MapsSuggestionsManager *manager;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPreFilter:(id)a0;
- (id)init;
- (void)clearData;
- (id)topSuggestionsWithSourceEntries:(id)a0 error:(id *)a1;
- (void)removeFilter:(id)a0;
- (BOOL)postFiltersKept:(id)a0;
- (void)removeAllDedupers;
- (void).cxx_destruct;
- (void)removeAllFilters;
- (void)removeAllImprovers;
- (void)addImprover:(id)a0;
- (BOOL)preFiltersKept:(id)a0;
- (void)addDeduper:(id)a0;
- (void)addPostFilter:(id)a0;

@end
