@class NSArray, SPSearchQuery, SPSearchQueryContext;

@interface SPClientSession : NSObject {
    NSArray *_searchDomains;
    BOOL _observersAdded;
    int _prefsToken;
    long long _contentFilter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sectionsLock;
    NSArray *_lastSections;
    SPSearchQuery *_lastQuery;
}

@property (readonly) NSArray *disabledBundleIds;
@property (retain) SPSearchQueryContext *currentQueryContext;
@property (nonatomic) BOOL infinitePatience;
@property long long maxUISuggestions;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;

- (long long)contentFilters;
- (id)init;
- (void)preheat;
- (void)finishRanking:(id)a0 blendingDuration:(double)a1;
- (id)copyStaleSectionsForQuery:(id)a0;
- (void)activate;
- (id)queryTaskWithContext:(id)a0;
- (void)setLastSections:(id)a0 forQuery:(id)a1;
- (void).cxx_destruct;
- (BOOL)_setSearchDomains:(id)a0;
- (void)deactivate;

@end
