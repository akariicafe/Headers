@class HDDatabaseValueCache, HDProfile, HDConcreteSyncIdentity;

@interface HDSyncIdentityManager : NSObject <HDProfileInitializedObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDConcreteSyncIdentity *_currentSyncIdentity;
    HDConcreteSyncIdentity *_legacySyncIdentity;
    HDDatabaseValueCache *_entityByIdentityCache;
    HDDatabaseValueCache *_identityByEntityPersistentIDCache;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *currentSyncIdentity;
@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *legacySyncIdentity;

+ (void)unitTest_resetCachedHardwareIdentifier;

- (BOOL)enumerateConcreteIdentitiesError:(id *)a0 enumerationHandler:(id /* block */)a1;
- (BOOL)rollCurrentSyncIdentityWithReason:(id)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0;
- (id)childIdentitiesForCurrentSyncIdentityWithTransaction:(id)a0 error:(id *)a1;
- (id)concreteIdentityForIdentity:(id)a0 shouldCreate:(BOOL)a1 transaction:(id)a2 error:(id *)a3;
- (void)profileDidInitialize:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)identityForEntityID:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (id)childIdentitiesForCurrentSyncIdentityWithError:(id *)a0;
- (BOOL)updateIsChild:(BOOL)a0 concreteIdentity:(id)a1 error:(id *)a2;

@end
