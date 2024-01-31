@class NSArray;

@interface HDInsertRacingClustersOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *clusters;
@property (readonly, nonatomic) long long provenance;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithClusters:(id)a0 provenance:(long long)a1;

@end
