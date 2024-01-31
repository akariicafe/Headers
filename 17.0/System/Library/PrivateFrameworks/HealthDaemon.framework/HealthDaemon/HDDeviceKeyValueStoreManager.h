@class HDProfile, HKObserverSet;

@interface HDDeviceKeyValueStoreManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKObserverSet *_observers;
}

@property (weak, nonatomic) HDProfile *profile;

- (void)removeObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)deleteProtectedKVEntriesForDeviceContext:(id)a0 error:(id *)a1;
- (BOOL)enumerateAllEntriesForSyncIdentity:(id)a0 protectionCategory:(long long)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (id)fetchEntriesForDomain:(id)a0 key:(id)a1 protectionCategory:(long long)a2 error:(id *)a3;
- (id)fetchEntryForKey:(id)a0 domain:(id)a1 syncIdentity:(id)a2 category:(long long)a3 error:(id *)a4;
- (BOOL)insertOrUpdateData:(id)a0 forKey:(id)a1 transaction:(id)a2 domainName:(id)a3 protectionCategory:(long long)a4 deviceContext:(id)a5 modificationDate:(id)a6 error:(id *)a7;
- (id)mostRecentEntryForDomain:(id)a0 key:(id)a1 protectionCategory:(long long)a2 error:(id *)a3;
- (BOOL)replaceOldSyncIdentity:(id)a0 newSyncIdentity:(id)a1 error:(id *)a2;
- (BOOL)setData:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 deviceContext:(id)a4 modificationDate:(id)a5 error:(id *)a6;
- (BOOL)setData:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 error:(id *)a4;
- (BOOL)setDate:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 error:(id *)a4;
- (BOOL)setNumber:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 error:(id *)a4;
- (BOOL)setString:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 error:(id *)a4;

@end
