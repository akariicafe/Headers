@class NSArray, EKReminderStore, EKChangeSet;

@interface EKFrozenReminderObject : EKPersistentObject {
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
}

@property (readonly, nonatomic) EKChangeSet *uncommittedChanges;
@property (copy, nonatomic) NSArray *path;

+ (Class)meltedClass;
+ (Class)frozenClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)changeSet;
- (id)remObjectID;
- (unsigned long long)hash;
- (BOOL)isFrozen;
- (int)entityType;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isNew;
- (BOOL)isEqual:(id)a0;
- (id)semanticIdentifier;
- (id)REMObject;
- (id)updatedFrozenObjectWithChanges:(id)a0;
- (BOOL)isPartialObject;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)existingMeltedObject;
- (BOOL)existsInStore;
- (id)frozenObject;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (BOOL)isCompletelyEqual:(id)a0;
- (BOOL)isEqual:(id)a0 ignoringProperties:(id)a1;
- (BOOL)isPropertyUnavailable:(id)a0;
- (id)updateParentToCommitSelf:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)valueForSingleValueKey:(id)a0 backingValue:(id /* block */)a1;

@end
