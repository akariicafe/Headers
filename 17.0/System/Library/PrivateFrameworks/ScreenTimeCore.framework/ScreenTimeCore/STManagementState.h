@class STPrivateServiceClient, NSXPCConnection;

@interface STManagementState : NSObject

@property BOOL cachedShouldRequestMoreTime;
@property BOOL cachedIsRestrictionsPasscodeSet;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) STPrivateServiceClient *privateServiceClient;
@property (readonly) BOOL contactsEditable;
@property (readonly) BOOL needsToSetRestrictionsPasscode;
@property (readonly, nonatomic) BOOL isRestrictionsPasscodeSet;
@property (readonly, nonatomic) BOOL shouldRequestMoreTime;

- (void)shouldRequestMoreTime:(id /* block */)a0;
- (void)lastModifcationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)isRestrictionsPasscodeSet:(id /* block */)a0;
- (void)dealloc;
- (void)contactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)enableRemoteManagementForDSID:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)a0 error:(id *)a1;
- (id)communicationPoliciesWithError:(id *)a0;
- (void)setLocationSharingModificationAllowed:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)a0 error:(id *)a1;
- (void)isContentPrivacyEnabledForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)enableScreenTimeForDSID:(id)a0 error:(id *)a1;
- (void)setScreenTimeSyncingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)performMigrationFromMCXSettings:(id)a0 error:(id *)a1;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)applyDefaultUserPoliciesWithError:(id *)a0;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)a0 error:(id *)a1;
- (void)isLocationSharingModificationAllowedForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)applyIntroductionModel:(id)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (void)setManageContactsEnabled:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)setScreenTimeEnabled:(BOOL)a0 error:(id *)a1;
- (void)isExplicitContentRestricted:(id /* block */)a0;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)a0;
- (void)communicationPoliciesForDSID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setScreenTimeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;
- (BOOL)clearRestrictionsPasscodeWithError:(id *)a0;

@end
