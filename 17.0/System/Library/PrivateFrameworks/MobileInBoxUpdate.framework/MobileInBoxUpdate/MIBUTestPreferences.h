@interface MIBUTestPreferences : NSObject

+ (id)sharedInstance;

- (id)isActivated;
- (id)isOnLockScreen;
- (id)wifiSSID;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (BOOL)inBoxUpdateMode;
- (BOOL)useAppleConnect;
- (BOOL)factorySUCertExist;
- (id)factorySUCertPath;
- (id)factorySUKeyIsSEP;
- (id)factorySUKeyPath;
- (id)fakeTatsuPayloadPath;
- (id)initialBuddySetupComplete;
- (id)iseTrustCertName;
- (id)iseTrustCertPaths;
- (id)nfcIdleTime;
- (BOOL)skipCertDeletion;
- (BOOL)skipDaemonDisable;
- (BOOL)skipWiFiAssociation;
- (BOOL)useLiveTatsu;

@end
