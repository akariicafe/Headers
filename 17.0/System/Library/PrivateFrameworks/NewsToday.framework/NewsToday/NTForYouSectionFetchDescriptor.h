@class NTCatchUpOperationForYouRequest, NTCatchUpOperationArticleIDsRequest, NSString;

@interface NTForYouSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>

@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest;
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *localNewsRequest;
@property (nonatomic) unsigned long long localNewsPromotionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)a0;
- (void).cxx_destruct;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)a0 limit:(unsigned long long)a1 priorFeedItems:(id)a2;
- (id)assembleResultsWithCatchUpOperation:(id)a0;
- (void)configureCatchUpOperationWithFetchRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithForYouConfiguration:(id)a0 appConfiguration:(id)a1 topStoriesChannelID:(id)a2 hiddenFeedIDs:(id)a3 allowPaidBundleFeed:(BOOL)a4 mutedTagIDs:(id)a5 purchasedTagIDs:(id)a6 subscribedTagIDs:(id)a7 bundleSubscriptionProvider:(id)a8;

@end
