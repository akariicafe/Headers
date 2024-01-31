@interface DMCProfileUILocalDataProvider : NSObject <DMCProfileUIDataProvider>

+ (id)localRMUIConfigurationInterfaceForProfileIdentifier:(id)a0 initialLoad:(BOOL)a1;

- (id)installedProfileWithIdentifier:(id)a0;
- (BOOL)isProvisionallyEnrolled;
- (id)installedMDMProfileIdentifier;
- (void)updateProfileWithIdentifier:(id)a0 interactionDelegate:(id)a1;
- (BOOL)isPasscodeSet;
- (void)unenrollWithCompletionBlock:(id /* block */)a0;
- (id)rmAccount;
- (id)managedAppsUninstalledOnMDMRemoval;
- (id)payloadsSummaryForProfile:(id)a0 showManagedPayloads:(BOOL)a1;
- (id)rmSpecifierProviderForProfileIdentifier:(id)a0;

@end
