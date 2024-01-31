@class NSDictionary, NSArray;

@interface NTItemAggregationResult : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor;
@property (copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (copy, nonatomic) NSArray *unusedSectionDescriptors;
@property (nonatomic) double slotsUsed;
@property (nonatomic) double headlineScale;
@property (readonly, nonatomic) unsigned long long itemCount;

- (id)init;
- (double)slotCostWithInfo:(id)a0;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)a0 slotAllocationByDynamicSlotItemID:(id)a1 unusedSectionDescriptors:(id)a2;
- (double)headlineSlotCostWithSlotCost:(double)a0;
- (id)copyWithHeadlineScale:(double)a0;
- (double)sectionOverheadSlotCostWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
