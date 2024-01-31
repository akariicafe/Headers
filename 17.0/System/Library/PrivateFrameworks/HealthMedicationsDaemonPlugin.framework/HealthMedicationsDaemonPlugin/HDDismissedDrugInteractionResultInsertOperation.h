@class NSArray;

@interface HDDismissedDrugInteractionResultInsertOperation : HDJournalableOperation {
    NSArray *_dismissedResults;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithDismissedDrugInteractionResults:(id)a0;

@end
