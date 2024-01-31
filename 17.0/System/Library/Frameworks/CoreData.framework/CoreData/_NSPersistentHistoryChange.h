@class NSSQLEntity, NSDictionary, NSData, NSPersistentHistoryTransaction, NSManagedObjectID;

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {
    long long _changeID;
    NSManagedObjectID *_changedObjectID;
    long long _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)tombstone;
- (void)encodeWithCoder:(id)a0;
- (id)changedObjectID;
- (id)transaction;
- (long long)changeType;
- (long long)changeID;
- (id)updatedProperties;
- (id)_backingObjectID;
- (void)_setTransaction:(id)a0;
- (id)initWithDictionary:(id)a0 andChangeObjectID:(id)a1;
- (id)initWithCoder:(id)a0;

@end
