@class NSString, ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain, nonatomic) NSString *gameBundleId;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property (nonatomic) BOOL lastSaveFailed;
@property long long loginCancelledCount;
@property (readonly) BOOL loginDisabled;

+ (id)accessQueue;
+ (id)sharedController;
+ (void)migrateOldAccountInformation;

- (void)accountStoreDidChange:(id)a0;
- (id)init;
- (void)getAltDSIDFromIDMSForCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)pushCredentialForEnvironment:(long long)a0;
- (id)accessQueue;
- (void)removeAllCredentialsForEnvironment:(long long)a0 completionHandler:(id /* block */)a1;
- (id)allCredentialsForEnvironment:(long long)a0;
- (void)setPrimaryCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)primaryCredentialForEnvironment:(long long)a0;
- (id)suggestedUsername;
- (void)setContactAssociationID:(id)a0 contactIntegrationConsent:(int)a1 serviceLastUpdateTimestamp:(id)a2 forEnvironment:(long long)a3 forcefully:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)_transactAndWait:(id /* block */)a0;
- (void)setCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_transact:(id /* block */)a0 complete:(id /* block */)a1;
- (void)removeCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)credentialForPlayer:(id)a0 environment:(long long)a1;
- (void)accountStoreEmailDidChange:(id)a0;
- (void)replaceCredential:(id)a0 withCredential:(id)a1 completionHandler:(id /* block */)a2;
- (id)primaryCredentialForEnvironment:(long long)a0 accountStore:(id)a1;
- (id)credentialForUsername:(id)a0 environment:(long long)a1;
- (void)invalidateCredentialCaches;

@end
