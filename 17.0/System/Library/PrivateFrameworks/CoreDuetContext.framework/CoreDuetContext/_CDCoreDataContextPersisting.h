@class NSCountedSet, _DKCoreDataStorage, NSObject;
@protocol OS_dispatch_queue;

@interface _CDCoreDataContextPersisting : NSObject <_CDContextPersisting>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) _DKCoreDataStorage *storage;
@property (readonly, nonatomic) NSCountedSet *keyPathRegistrationCount;

+ (id)persistenceWithDirectory:(id)a0;
+ (id)persistenceWithStorage:(id)a0;

- (BOOL)_withMOFromEntityWithName:(id)a0 andUniqunessPredicate:(id)a1 insert:(BOOL)a2 update:(id /* block */)a3;
- (id)initWithStorage:(id)a0;
- (BOOL)withMOFromEntityWithName:(id)a0 andUniqunessPredicate:(id)a1 update:(id /* block */)a2;
- (void)deleteAllData;
- (id)uniquenessPredicateForKeyPath:(id)a0;
- (void)deleteRegistration:(id)a0;
- (void)saveValue:(id)a0 forKeyPath:(id)a1;
- (BOOL)fromEntityWithName:(id)a0 deleteObjectsMatching:(id)a1;
- (void)saveRegistration:(id)a0;
- (id)loadValues;
- (id)getMOC;
- (id)uniqunessPredicateForRegistration:(id)a0;
- (void).cxx_destruct;
- (BOOL)fromEntityWithName:(id)a0 fetchAllObjectsMatchingPredicate:(id)a1 handlingMOs:(id /* block */)a2;
- (id)loadRegistrations;
- (void)deleteDataCreatedBefore:(id)a0;
- (void)_deleteKeyPaths:(id)a0;
- (BOOL)withMOFromEntityWithName:(id)a0 andUniqunessPredicate:(id)a1 insertOrUpdate:(id /* block */)a2;

@end
