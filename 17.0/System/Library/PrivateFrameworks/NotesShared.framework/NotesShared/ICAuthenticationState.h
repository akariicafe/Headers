@class NSMutableDictionary, NSTimer, NSArray;

@interface ICAuthenticationState : NSObject

@property (class, readonly, nonatomic) ICAuthenticationState *sharedState;
@property (class, readonly, nonatomic) double defaultDeauthenticationTimeInterval;

@property (readonly, nonatomic) BOOL deviceSupportsBiometrics;
@property (readonly, nonatomic) NSMutableDictionary *objectIDsToMainKey;
@property (nonatomic) long long blockingDeauthenticationCount;
@property (retain, nonatomic) NSTimer *deauthenticationTimer;
@property (nonatomic) BOOL didAttemptToDeauthenticateWhileBlocked;
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic, getter=isBlockingDeauthentication) BOOL blockingDeauthentication;
@property (readonly, nonatomic) BOOL hasAuthenticatedObject;
@property (readonly, nonatomic, getter=isAuthenticatedWithDevicePassword) BOOL authenticatedWithDevicePassword;
@property (nonatomic) double deauthenticationTimeInterval;
@property (retain, nonatomic) NSArray *deauthenticationTimerRunLoopModes;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)authenticateObjectWithKeychain:(id)a0;
- (BOOL)addMainKeyToKeychainForObject:(id)a0;
- (BOOL)authenticateAllNotesInAccount:(id)a0 withPassphrase:(id)a1;
- (BOOL)authenticateObject:(id)a0 withPassphrase:(id)a1;
- (void)authenticateWithDevicePassword;
- (void)beginBlockingDeauthentication;
- (id)cachedMainKeyForIdentifier:(id)a0;
- (void)endBlockingDeauthentication;
- (BOOL)isBiometricsEnabledForAccount:(id)a0;
- (id)mainKeyFromKeychainForObject:(id)a0;
- (BOOL)removeMainKeysFromKeychainForAccount:(id)a0;
- (void)setBiometricsEnabled:(BOOL)a0 forAccount:(id)a1;
- (BOOL)setCachedMainKey:(id)a0 forObject:(id)a1;
- (void)setCachedMainKey:(id)a0 forIdentifier:(id)a1;
- (id)mainKeyFromKeychainForKeyObject:(id)a0 decryptingObject:(id)a1 cipherVersion:(long long)a2;
- (BOOL)setMainKeyInKeychain:(id)a0 forObject:(id)a1;
- (id)cachedMainKeyForKeyObject:(id)a0 decryptingObject:(id)a1;
- (id)cachedMainKeyForObject:(id)a0;
- (void)deauthenticate;
- (void)deauthenticateAllObjects;
- (void)deauthenticateWithDevicePassword;
- (void)extendDeauthenticationTimer;
- (id)faceIDEnabledKeyForAccountIdentifier:(id)a0;
- (id)mainKeyFromKeychainForKeyObject:(id)a0 cipherVersion:(long long)a1;
- (id)mainKeyIdentifierForKeyObject:(id)a0 cipherVersion:(long long)a1;
- (BOOL)removeAllMainKeysFromKeychain;
- (BOOL)removeMainKeyFromKeychainForObject:(id)a0;
- (id)touchIDEnabledKeyForAccountIdentifier:(id)a0;

@end
