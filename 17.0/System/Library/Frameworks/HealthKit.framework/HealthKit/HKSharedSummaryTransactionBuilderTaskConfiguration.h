@class NSUUID;

@interface HKSharedSummaryTransactionBuilderTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSUUID *transactionUUID;
@property (nonatomic) BOOL allowCommitted;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
