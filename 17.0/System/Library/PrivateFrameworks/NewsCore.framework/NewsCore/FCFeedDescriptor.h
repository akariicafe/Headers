@class NSString, NSArray;
@protocol FCContentContext, FCFeedTheming, FCTagProviding, FCChannelProviding;

@interface FCFeedDescriptor : NSObject <NSCopying, FCFeedAdMetadataProviding>

@property (readonly, nonatomic) long long feedType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<FCFeedTheming> theme;
@property (retain, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) BOOL hideAccessoryText;
@property (readonly, nonatomic) id<FCTagProviding> backingTag;
@property (readonly, nonatomic) id<FCChannelProviding> backingChannel;
@property (readonly, nonatomic) NSString *backingChannelID;
@property (readonly, nonatomic) NSString *backingSectionID;
@property (readonly, nonatomic) NSString *backingTopicID;
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, nonatomic) long long feedSortMethod;
@property (readonly, nonatomic) unsigned long long feedFilterOptions;
@property (readonly, nonatomic) long long feedPersonalizationConfigurationSet;
@property (readonly, nonatomic) unsigned long long feedConfiguration;
@property (readonly, nonatomic) FCFeedDescriptor *alternativeFeedDescriptor;
@property (retain, nonatomic) NSArray *otherArticleIDs;
@property (readonly, nonatomic) NSString *iAdIdentifier;
@property (readonly, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) NSArray *iAdKeywords;
@property (readonly, nonatomic) long long iAdContentProvider;
@property (readonly, nonatomic) NSString *iAdPrimaryAudience;
@property (readonly, nonatomic) NSString *iAdFeedID;
@property (readonly, nonatomic) NSString *iAdSectionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)associateAlternativeFeedDescriptor:(id)a0;
- (id)fetchOperationForHeadlinesWithIDs:(id)a0 context:(id)a1;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (id)latestHeadlineResultsWithContext:(id)a0;
- (id)streamOfHeadlinesWithIDs:(id)a0 context:(id)a1 cachedOnly:(BOOL)a2 maxCachedAge:(double)a3;
- (id)streamOfLatestHeadlinesWithContext:(id)a0;

@end
