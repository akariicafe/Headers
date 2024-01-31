@class NSData, NSString, PKAccountStatementMetadata;

@interface PKAccountExportedTransactionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *transactionData;
@property (copy, nonatomic) NSString *transactionDataFilename;
@property (copy, nonatomic) NSString *transactionDataHash;
@property (retain, nonatomic) PKAccountStatementMetadata *statementMetadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
