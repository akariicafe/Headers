@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (id)defaultConnectionIfExistsForKey:(id)a0;
+ (id)cloudDocsCachesURL;
+ (id)secondaryConnectionForKey:(id)a0 initializer:(id /* block */)a1;
+ (void)initialize;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnectionIfExists;
+ (void)invalidateCachedURLProperties;
+ (id)syncedDesktopURL;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)homeDirectoryURL;
+ (id)secondaryConnection;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)defaultConnectionIfExists;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionForKey:(id)a0 initializer:(id /* block */)a1;
+ (id)mobileDocumentsURL;
+ (id)syncedRootURLs;
+ (id)cloudDocsAppSupportURL;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (id)defaultConnection;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDocumentsURL;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnectionIfExistsForKey:(id)a0;
+ (void)clearURLCache;

- (id)newSyncTokenProxy;
- (id)newSyncProxy;
- (void)_setupAndResumeForKey:(id)a0;
- (id)newLegacySyncProxy;
- (id)newFPFSSyncProxy;
- (void).cxx_destruct;
- (id)initUsingUserLocalDaemonTokenService;
- (id)initUsingUserLocalDaemon;

@end
