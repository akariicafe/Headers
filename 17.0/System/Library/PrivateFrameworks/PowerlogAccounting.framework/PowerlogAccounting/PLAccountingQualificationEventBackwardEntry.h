@interface PLAccountingQualificationEventBackwardEntry : PLAccountingQualificationEventEntry

+ (id)entryKey;
+ (void)load;
+ (int)classDirectionality;

- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withEndDate:(id)a2;

@end
