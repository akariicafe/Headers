@class NTCatchUpOperationForYouRequest, NTCatchUpOperationTagRequest, NSString;

@interface NTTagSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>

@property (copy, nonatomic) NTCatchUpOperationTagRequest *tagRequest;
@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest;
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
- (id)initWithTagConfiguration:(id)a0 appConfiguration:(id)a1 purchasedTagIDs:(id)a2 bundleSubscriptionProvider:(id)a3;

@end
