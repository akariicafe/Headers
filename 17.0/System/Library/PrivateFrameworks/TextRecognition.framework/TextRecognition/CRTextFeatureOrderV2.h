@interface CRTextFeatureOrderV2 : NSObject <CRTextFeatureOrdering>

@property double angleThresholdForRotatedCrops;
@property long long textFeatureOrderMode;

- (id)createCoarseCTLDConfig;
- (id)createFineCTLDConfig;
- (id)initWithAngleThresholdForRotatedCrops:(double)a0;
- (id)orderAndGroupRegions:(id)a0;
- (id)orderAndGroupRegions:(id)a0 coarseDelegate:(id)a1 fineDelegate:(id)a2;
- (id)orderAndGroupRegions:(id)a0 coarseDelegate:(id)a1 fineDelegate:(id)a2 coarseOnly:(BOOL)a3;
- (id)orderAndGroupRegions:(id)a0 tableGroups:(id)a1;
- (id)rowOrderLinesFromTable:(id)a0 cellGroups:(id)a1 outSortedCellGroups:(id)a2;

@end
