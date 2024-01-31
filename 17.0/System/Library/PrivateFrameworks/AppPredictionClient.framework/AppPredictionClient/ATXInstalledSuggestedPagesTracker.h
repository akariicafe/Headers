@class ATXGenericFileBasedCache, ATXBiomeSuggestedHomePageStream, NSObject;
@protocol OS_dispatch_queue;

@interface ATXInstalledSuggestedPagesTracker : NSObject {
    ATXGenericFileBasedCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeSuggestedHomePageStream *_suggestedHomePageStream;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (long long)suggestedPageTypeWithIdentifier:(id)a0;
- (void)storePageIdentifier:(id)a0 modeUUID:(id)a1 forPageType:(long long)a2;
- (void)removePagesWithIdentifiersNotInSet:(id)a0;
- (id)identifierOfSuggestedPageForModeUUID:(id)a0;
- (void).cxx_destruct;
- (void)trackSuggestedHomePageWithAction:(long long)a0 pageType:(long long)a1 identifier:(id)a2;
- (void)_serializePages:(id)a0;
- (id)allInstalledPages;
- (id)_allInstalledPages;

@end
