@class NSString, NSData, HDDeviceContext, NSDate;

@interface HDInsertOrUpdateDeviceKeyValueEntryOperation : HDJournalableOperation {
    long long _category;
    NSData *_value;
    NSString *_key;
    NSString *_domainName;
    HDDeviceContext *_deviceContext;
    NSDate *_modificationDate;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)transactionContext;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithCategory:(long long)a0 key:(id)a1 value:(id)a2 domain:(id)a3 deviceContext:(id)a4 modificationDate:(id)a5;

@end
