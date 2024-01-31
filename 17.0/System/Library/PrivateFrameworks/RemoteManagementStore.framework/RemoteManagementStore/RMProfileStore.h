@class NSString, RMProviderStore;

@interface RMProfileStore : NSObject

@property (copy, nonatomic) NSString *ownerIdentifier;
@property (retain, nonatomic) RMProviderStore *store;
@property (nonatomic) long long scope;

+ (id)profileStoreForOwner:(id)a0;
+ (id)profileStoreForOwner:(id)a0 scope:(long long)a1;

- (id)initWithOwner:(id)a0 scope:(long long)a1;
- (void)removeProfile:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_applyDeclarationsForProfile:(id)a0 declarations:(id)a1 completionHandler:(id /* block */)a2;
- (id)_createStoreReturningError:(id *)a0;
- (id)_findStoreReturningError:(id *)a0;
- (id)_metadataKeyForProfile:(id)a0;
- (id)_newDeclarationsMap:(id)a0 error:(id *)a1;
- (id)_oldDeclarationKeysForProfile:(id)a0 error:(id *)a1;
- (BOOL)_removeDeclarationKeysForProfile:(id)a0 error:(id *)a1;
- (void)_removeDeclarationsForProfile:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_saveDeclarationKeysForProfile:(id)a0 keys:(id)a1 error:(id *)a2;
- (void)installProfile:(id)a0 declarations:(id)a1 completionHandler:(id /* block */)a2;
- (id)providerStoreReturningError:(id *)a0;

@end
