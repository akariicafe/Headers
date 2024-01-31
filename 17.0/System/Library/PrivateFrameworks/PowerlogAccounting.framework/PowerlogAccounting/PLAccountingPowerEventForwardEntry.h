@interface PLAccountingPowerEventForwardEntry : PLAccountingPowerEventEntry

+ (id)entryKey;
+ (void)load;
+ (int)classDirectionality;

- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withStartDate:(id)a2;
- (BOOL)canMergeWithEvent:(id)a0;

@end
