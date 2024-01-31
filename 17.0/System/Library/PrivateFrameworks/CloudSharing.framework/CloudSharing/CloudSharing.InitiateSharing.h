@interface CloudSharing.InitiateSharing : NSObject

- (id)init;
- (void).cxx_destruct;
- (void)callForSharingURLAddToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 accessType:(long long)a4 permissionType:(long long)a5 allowOthersToInvite:(BOOL)a6 reply:(id /* block */)a7;
- (void)callForAddParticipantsToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 reply:(id /* block */)a6;
- (void)callForAddParticipantsToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 reply:(id /* block */)a4;
- (void)callForCloudKitAddToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 accessType:(long long)a4 permissionType:(long long)a5 allowOthersToInvite:(BOOL)a6 reply:(id /* block */)a7;
- (void)callForCurrentUserSharingStatus:(id)a0 reply:(id /* block */)a1;
- (void)callForExistingShareForFile:(id)a0 reply:(id /* block */)a1;
- (void)callForFileSharing:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 reply:(id /* block */)a6;
- (void)callForForciblyShareFolder:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 reply:(id /* block */)a6;
- (void)callForMailContent:(id)a0 share:(id)a1 fileURL:(id)a2 appName:(id)a3 appIconData:(id)a4 reply:(id /* block */)a5;
- (void)callForMetadataFromShareURL:(id)a0 containerSetupInfo:(id)a1 reply:(id /* block */)a2;
- (void)callForRemoveShare:(id)a0 containerSetupInfo:(id)a1 reply:(id /* block */)a2;
- (void)callForSharingStatus:(id)a0 reply:(id /* block */)a1;
- (void)callForSharingURLRemoveShare:(id)a0 containerSetupInfo:(id)a1 reply:(id /* block */)a2;
- (void)callForUpdateShare:(id)a0 containerSetupInfo:(id)a1 reply:(id /* block */)a2;
- (void)callForUserNameAndEmail:(id)a0 containerSetupInfo:(id)a1 reply:(id /* block */)a2;

@end
