@class NSString, NSURL, NSDictionary;

@interface CKVSpeechItemRanker_Media : CKVSpeechItemRanker {
    NSString *_trialMediaRankingStrategy;
    NSURL *_rankedItemCacheDirectory;
    NSDictionary *_itemIdToRank;
    BOOL _trialTreatmentApplied;
    unsigned long long _playableLimit;
    unsigned long long _artistLimit;
}

+ (BOOL)_isArtistItem:(id)a0;
+ (BOOL)_isPlayableItem:(id)a0;
+ (id)_itemIdsFromMediaEntities:(id)a0;
+ (id)_performMediaCollectionsQuery:(id)a0 limit:(unsigned long long)a1 orderingProperties:(id)a2 orderingDirectionMappings:(id)a3;
+ (id)_performMediaItemsQuery:(id)a0 limit:(unsigned long long)a1 orderingProperties:(id)a2 orderingDirectionMappings:(id)a3;
+ (id)_rankedItemCacheFileWithDirectory:(id)a0;
+ (id)_rankedItemIdsFromTopPlayables:(id)a0 topArtists:(id)a1 playableLimit:(unsigned long long)a2 artistLimit:(unsigned long long)a3;
+ (id)queryRecentMediaEntities;
+ (id)queryTopPlayableIds;

- (void).cxx_destruct;
- (void)_activateEnrolledTrialExperiments;
- (BOOL)_loadRankedItemCache;
- (id)_queryAndRankMediaItems;
- (BOOL)addDataset:(id)a0;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)getActiveTrialExperimentIds;
- (id)initWithDatabase:(id)a0 rankedItemCacheDirectory:(id)a1;
- (id)initWithDatabase:(id)a0 rankedItemCacheDirectory:(id)a1 playableLimit:(unsigned long long)a2 artistLimit:(unsigned long long)a3 itemIdToRank:(id)a4;
- (BOOL)refreshRankedItemCacheWithDataProtectionClass:(int)a0;
- (BOOL)trialTreatmentApplied;

@end
