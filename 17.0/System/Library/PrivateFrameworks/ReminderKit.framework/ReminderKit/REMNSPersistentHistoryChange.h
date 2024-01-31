@class NSPersistentHistoryChange, NSArray, REMChangeTransaction, REMObjectID, _REMNSPersistentHistoryChangeStorage;

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (readonly, weak) NSPersistentHistoryChange *persistentHistoryChange;
@property (retain) REMObjectID *cachedChangedREMObjectID;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) BOOL isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (BOOL)supportsSecureCoding;
+ (id)shortStringForChangeType:(long long)a0;
+ (id)stringForChangeType:(long long)a0;

- (id)initWithStorage:(id)a0;
- (id)tombstone;
- (void)encodeWithCoder:(id)a0;
- (id)changedObjectID;
- (id)transaction;
- (long long)changeType;
- (long long)changeID;
- (id)description;
- (id)updatedProperties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)changedManagedObjectID;
- (id)copyForCoalescing;
- (id)initWithPersistentHistoryChange:(id)a0;
- (void)resolveObjectIDWithUUID:(id)a0 entityName:(id)a1;

@end
