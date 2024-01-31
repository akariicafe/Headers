@class AMSMediaTokenServiceKeychainStore, NSString, AMSMediaToken;

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessLock;
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (readonly, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (readonly, nonatomic) NSString *notificationObject;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;
@property (readonly, nonatomic) BOOL usingAccessControlIdentifier;

+ (BOOL)_hasAppleGroupEnabled;

- (void)storeToken:(id)a0;
- (void)dealloc;
- (id)retrieveToken;
- (void)_setupKeychainNotifications;
- (id)_mediaTokenChangedNotificationName;
- (id)_keychainAccessGroup;
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (void)_mediaTokenChanged:(id)a0;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 usingAccessControlIdentifier:(BOOL)a2;
- (void).cxx_destruct;
- (id)_mediaTokenFromUserDefaults;
- (void)_teardownKeychainNotifications;
- (void)deleteToken;
- (id)initWithClientIdentifier:(id)a0 keychainStore:(id)a1;

@end
