@class NSNumber, NSDictionary;

@interface PLAccountingDistributionEventEntry : PLAccountingEventEntry

@property BOOL _distributeRangeWeightedTotal;
@property (readonly, nonatomic) NSNumber *distributionID;
@property (readonly, nonatomic) NSDictionary *childNodeIDToWeight;
@property (readonly, nonatomic) NSDictionary *childNodeNameToWeight;
@property (readonly, nonatomic) BOOL distributeRangeWeightedTotal;

+ (void)load;
+ (id)mergingDenyList;

- (void).cxx_destruct;
- (BOOL)canMergeWithEvent:(id)a0;
- (id)subEntryKey;
- (id)initWithDistributionID:(id)a0 withChildNodeIDToWeight:(id)a1 withRange:(id)a2;
- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withRange:(id)a2;
- (int)instanceDirectionality;
- (BOOL)isEmptyEvent;
- (BOOL)isEqualContentsWithEvent:(id)a0;

@end
