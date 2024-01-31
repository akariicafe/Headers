@class NSString, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore, FCTodayPrivateData;

@interface FCFeedPersonalizer : NSObject <FCFeedPersonalizing>

@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> readonlyPersonalizationAggregateStore;
@property (copy, nonatomic) id<FCTodayPrivateData> todayData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)initWithPersonalizationTreatment:(id)a0 readonlyPersonalizationAggregateStore:(id)a1 todayData:(id)a2;
- (id)scoresForTagIDs:(id)a0;
- (void).cxx_destruct;
- (double)decayedPublisherDiversificationPenalty;
- (unsigned long long)whitelistLevelForTagID:(id)a0;
- (id)_userProfile;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;
- (id)rankTagIDsDescending:(id)a0;
- (void)prepareFavoritesWithCompletionHandler:(id /* block */)a0;

@end
