@class NSString, NSXPCConnection;

@interface WBSAuthenticationServicesAgentCredentialSharingGroupsProxy : NSObject <WBSAuthenticationServicesAgentCredentialSharingGroupsUserNotificationsProtocol> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_setUpConnection:(id)a0;
- (void)setDebugIgnoreDateChecksForRecentlyDeletedNotificationsDefault:(BOOL)a0;
- (void)deleteGroupWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)groupsUpdatedWithInfos:(id)a0;
- (void)groupsUpdatedWithInfos:(id)a0 shouldForceShowingNotifications:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)leaveGroupWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(id /* block */)a0;

@end
