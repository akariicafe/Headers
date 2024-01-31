@class NSString, NTPBTodaySectionConfigWebEmbed, SFSearchResult, NSDate, NTPBFeedItem;
@protocol FCFeedTransformationItem;

@interface NTFeedTransformationWebEmbedItem : NSObject <NTFeedTransformationItem>

@property (readonly, copy, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long todayItemType;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult;
@property (readonly, nonatomic) BOOL usesDynamicSlotAllocation;
@property (readonly, nonatomic) id<FCFeedTransformationItem> feedTransformationItem;
@property (readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, nonatomic) unsigned long long preferredDynamicSlotAllocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)protoitemWithFetchedFeedItemHeadline:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWebEmbed:(id)a0;

@end
