@interface NewsPersonalization.XavierScoringService : NSObject <FCFeedPersonalizing> {
    void /* unknown type, empty encoding */ aggregateStore;
    void /* unknown type, empty encoding */ aggregateContext;
    void /* unknown type, empty encoding */ _personalizationTreatment;
    void /* unknown type, empty encoding */ _clientSideEngagementBoostEnabled;
    void /* unknown type, empty encoding */ _fallbackToReverseChronSorting;
    void /* unknown type, empty encoding */ _publisherDampeningConfig;
    void /* unknown type, empty encoding */ _shadowPublisherDampeningConfig;
    void /* unknown type, empty encoding */ favoritesPersonalizer;
    void /* unknown type, empty encoding */ translationProvider;
    void /* unknown type, empty encoding */ userContextProvider;
    void /* unknown type, empty encoding */ userEmbeddingProvider;
    void /* unknown type, empty encoding */ tabiUserEventHistoryScoringService;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ scoringJournal;
}

- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)scoresForTagIDs:(id)a0;
- (double)decayedPublisherDiversificationPenalty;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;
- (id)rankTagIDsDescending:(id)a0;
- (void)fetchAggregateMapForPersonalizingItem:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
