@class NSString, NTCatchUpOperationArticleIDsRequest, NTPBPersonalizedTodaySectionSpecificConfig;

@interface NTPersonalizedSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>

@property (copy, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedConfiguration;
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *mandatoryArticleIDsRequest;
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *personalizedArticleIDsRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithPersonalizedConfiguration:(id)a0;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)a0;
- (void).cxx_destruct;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)a0 limit:(unsigned long long)a1 priorFeedItems:(id)a2;
- (id)assembleResultsWithCatchUpOperation:(id)a0;
- (void)configureCatchUpOperationWithFetchRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
