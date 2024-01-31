@interface PLAccountingDistributionEventForwardEntry : PLAccountingDistributionEventEntry

+ (id)entryKey;
+ (void)load;
+ (int)classDirectionality;

- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2;

@end
