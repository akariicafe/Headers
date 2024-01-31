@class NSObject, NSString, NSDate;
@protocol FCTodayPrivateData, FCPersonalizationFunctionProviding, FCCoreConfigurationManager, FCFeedPersonalizing;

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator>

@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) id<FCFeedPersonalizing, FCPersonalizationFunctionProviding> feedPersonalizer;
@property (copy, nonatomic) NSDate *filterDate;
@property (copy, nonatomic) NSObject<FCTodayPrivateData> *todayData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_itemsForSection:(id)a0 items:(id)a1 withBudgetInfo:(id)a2 previouslyChosenItems:(id)a3 priorClusterIDsInOtherSections:(id)a4 sectionItemsLimit:(unsigned long long)a5 otherArticleIDs:(id)a6 embedsLimit:(unsigned long long)a7 remainingSlots:(double)a8 slotsUsed:(double *)a9 noMoreItemsToGive:(BOOL *)a10 noRoomForMoreItems:(BOOL *)a11 slotAllocationByDynamicSlotItemID:(id)a12;
- (id)aggregateSections:(id)a0 itemsBySectionDescriptor:(id)a1 budgetInfo:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfigurationManager:(id)a0 feedPersonalizer:(id)a1 filterDate:(id)a2 todayData:(id)a3;
- (id)_sectionFilterTransformationWithDescriptor:(id)a0 priorClusterIDsInOtherSections:(id)a1 priorClusterIDsInSection:(id)a2 otherArticleIDs:(id)a3 embedsLimit:(unsigned long long)a4;

@end
