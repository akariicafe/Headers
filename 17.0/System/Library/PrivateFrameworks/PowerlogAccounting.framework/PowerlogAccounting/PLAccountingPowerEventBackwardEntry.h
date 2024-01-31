@interface PLAccountingPowerEventBackwardEntry : PLAccountingPowerEventEntry

+ (id)entryKey;
+ (void)load;
+ (id)mergingDenyList;
+ (int)classDirectionality;

- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withEndDate:(id)a2;
- (BOOL)canMergeWithEvent:(id)a0;

@end
