@class NSArray;

@interface HDInsertCodableSummarySharingEntryOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *codableEntries;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) BOOL shouldResolveCNContact;
@property (readonly, nonatomic) BOOL ignoreIfExists;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithCodableEntries:(id)a0 ignoreIfExists:(BOOL)a1 provenance:(long long)a2 shouldResolveCNContact:(BOOL)a3;

@end
