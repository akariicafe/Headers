@class FCDerivedPersonalizationData, NSString, NSArray, NSData, NSSet, NSDictionary, NSNumber, FCBundleSubscription;

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) FCDerivedPersonalizationData *derivedPersonalizationData;
@property (readonly, copy, nonatomic) NSString *localNewsTagID;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, copy, nonatomic) NSSet *groupableTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedAllSubscriptionDates;
@property (readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property (readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property (readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly, copy, nonatomic) NSData *userEmbeddingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
