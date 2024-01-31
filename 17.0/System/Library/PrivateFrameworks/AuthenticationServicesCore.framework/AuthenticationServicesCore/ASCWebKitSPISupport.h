@interface ASCWebKitSPISupport : NSObject

@property (class, nonatomic) BOOL shouldUseAlternateCredentialStore;

+ (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)a0;
+ (id)alternateLargeBlobIfNecessaryForRelyingParty:(id)a0 clientDataHash:(id)a1;
+ (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
+ (BOOL)canCurrentProcessAccessPasskeysForRelyingParty:(id)a0;
+ (void)getArePasskeysDisallowedForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
+ (void)resetCredentialStore;

@end
