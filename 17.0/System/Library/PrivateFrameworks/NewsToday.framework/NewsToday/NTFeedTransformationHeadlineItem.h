@class NSString, SFSearchResult, NSURL, NSDate, NTPBFeedItem;
@protocol FCHeadlineProviding, FCFeedTransformationItem;

@interface NTFeedTransformationHeadlineItem : NSObject <NTFeedTransformationItem>

@property (copy, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, copy, nonatomic) NSURL *actionURL;
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
- (id)initWithHeadline:(id)a0 cacheExpirationDate:(id)a1 searchResult:(id)a2 actionURL:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
