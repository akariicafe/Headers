@class NSUUID;

@interface HDDiscardWorkoutOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *builderIdentifier;

- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithBuilderIdentifier:(id)a0;

@end
