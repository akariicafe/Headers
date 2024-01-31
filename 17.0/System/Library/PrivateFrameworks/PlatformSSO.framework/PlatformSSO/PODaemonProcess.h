@class PODirectoryServices, NSString, NSXPCConnection, POUserGroupManager;

@interface PODaemonProcess : NSObject <PODaemonProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) PODirectoryServices *directoryServices;
@property BOOL dataVaultInitialized;
@property (retain) POUserGroupManager *userGroupManager;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)_defaultConfigurationPath;
- (void)_enablePlatformSSORuleForLogin:(id /* block */)a0;
- (id)_deviceConfigurationForIdentifer:(id)a0;
- (void)_disablePlatformSSORuleForLogin:(id /* block */)a0;
- (void)_disablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (void)_enablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (id)_loginConfigurationForIdentifer:(id)a0;
- (BOOL)_removeDeviceConfigurationForIdentifer:(id)a0 error:(id *)a1;
- (BOOL)_removeLoginConfigurationForIdentifer:(id)a0 error:(id *)a1;
- (BOOL)_removeUserConfigurationForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_saveDeviceConfiguration:(id)a0 identifer:(id)a1 error:(id *)a2;
- (BOOL)_saveLoginConfiguration:(id)a0 identifer:(id)a1 error:(id *)a2;
- (BOOL)_saveUserConfigurationData:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_updateGroupForRight:(id)a0 newGroup:(id)a1;
- (id)_userConfigurationForIdentifier:(id)a0 error:(id *)a1;
- (void)deviceConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)disablePlatformSSORules:(id /* block */)a0;
- (void)enablePlatformSSORules:(id /* block */)a0;
- (void)handleAuthRights;
- (void)handleStartup;
- (void)loginConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)migrateConfiguration:(BOOL)a0 completion:(id /* block */)a1;
- (void)removeDeviceConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)removeLoginConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)removeUserConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)a0;
- (void)saveAppSSOConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)saveDeviceConfiguration:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveLoginConfiguration:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveUserConfiguration:(id)a0 forIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)saveUserConfigurationData:(id)a0 forIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)userConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;

@end
