@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)accountID;
- (id)changes;
- (id)initWithStorage:(id)a0;
- (id)storeID;
- (void)encodeWithCoder:(id)a0;
- (id)author;
- (id)description;
- (id)timestamp;
- (void).cxx_destruct;
- (id)token;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_resolveAccountID:(id)a0;

@end
