@class NSDictionary, PGGraph, NSLocale, CLSHolidayCalendarEventService, PGSearchComputationCache;

@interface PGSearchKeywordComputer : NSObject {
    PGGraph *_graph;
    NSDictionary *_personLocalIdentifiersBySocialGroupUUID;
    NSLocale *_userLocale;
    CLSHolidayCalendarEventService *_holidayService;
}

@property (readonly, nonatomic) PGSearchComputationCache *searchComputationCache;

- (void).cxx_destruct;
- (id)_personLocalIdentifiersBySocialGroupUUIDWithPhotoLibrary:(id)a0 graph:(id)a1;
- (void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateEventNodesForUUIDs:(id)a0 ofType:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)_holidayNodesForTimedEvent:(id)a0;
- (id)_personUUIDsInSocialGroupNode:(id)a0 photoLibrary:(id)a1;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (id)initWithGraph:(id)a0 searchComputationCache:(id)a1;
- (id)searchKeywordsByEventWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1 photoLibrary:(id)a2 progressBlock:(id /* block */)a3;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1 inPhotoLibrary:(id)a2 isFullAnalysis:(BOOL)a3 progressBlock:(id /* block */)a4;

@end
