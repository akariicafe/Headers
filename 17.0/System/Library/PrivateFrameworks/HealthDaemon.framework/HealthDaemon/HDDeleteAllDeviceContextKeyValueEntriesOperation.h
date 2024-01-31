@class HDSyncIdentity;

@interface HDDeleteAllDeviceContextKeyValueEntriesOperation : HDJournalableOperation {
    HDSyncIdentity *_syncIdentity;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)transactionContext;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithSyncIdentity:(id)a0;

@end
