@interface MTCoreDataKeyRequestStorage : NSObject <MTSecureKeyRequestStorage>

- (id)init;
- (BOOL)saveKeyDataFor:(id)a0;
- (void)removeAllKeyDataWithCompletion:(id /* block */)a0;
- (BOOL)keyExistsInStorageFor:(long long)a0;
- (void)markOfflineKeyFor:(long long)a0 pendingDeletion:(BOOL)a1;
- (void)removeKeyDataFor:(id)a0;
- (void)removeKeyDataForStoreTrackID:(long long)a0;
- (id)retrieveKeyDataFor:(id)a0;
- (void)saveKeyDataWithKeyIdentifier:(id)a0 storeTrackID:(long long)a1 keyData:(id)a2 renewalDate:(id)a3 dsid:(long long)a4 responseQueue:(id)a5 completion:(id /* block */)a6;

@end
