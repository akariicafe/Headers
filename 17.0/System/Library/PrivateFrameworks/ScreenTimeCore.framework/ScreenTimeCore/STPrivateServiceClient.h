@class NSXPCConnection;

@interface STPrivateServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (id)communicationPoliciesWithError:(id *)a0;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)contactsEditable;
- (void).cxx_destruct;
- (void)setManageContactsEnabled:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setScreenTimeEnabled:(BOOL)a0 error:(id *)a1;
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;
- (BOOL)clearRestrictionsPasscodeWithError:(id *)a0;
- (void)setScreenTimeSyncEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)shouldRequestMoreTimeWithError:(id *)a0;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchContactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isContentPrivacyEnabledForDSID:(id)a0 error:(id *)a1;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)a0;
- (BOOL)isRestrictionsPasscodeSetWithError:(id *)a0;
- (BOOL)isScreenTimeEnabledWithError:(id *)a0;
- (BOOL)isScreenTimeSyncEnabledWithError:(id *)a0;
- (BOOL)needsToSetRestrictionsPasscodeWithError:(id *)a0;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (void)shouldRequestMoreTimeWithCompletionHandler:(id /* block */)a0;

@end
