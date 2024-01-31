@class NSString;

@interface PasswordManagerUI.OngoingCredentialSharingAlertConfiguration : NSObject

@property (class, nonatomic, readonly) NSString *alertTitleForFailingToMoveToGroup;
@property (class, nonatomic, readonly) NSString *groupDeletionConfirmationAlertTitle;
@property (class, nonatomic, readonly) NSString *groupDeletionConfirmationAlertSubtitle;
@property (class, nonatomic, readonly) NSString *groupDeletionWarningAlertSubtitle;
@property (class, nonatomic, readonly) NSString *leaveGroupConfirmationAlertTitle;
@property (class, nonatomic, readonly) NSString *leaveGroupConfirmationAlertSubtitle;
@property (class, nonatomic, readonly) NSString *leaveGroupWarningAlertSubtitle;
@property (class, nonatomic, readonly) NSString *alertTitleForFailingToMoveAccountsBackToPersonalKeychainWhileLeavingGroup;
@property (class, nonatomic, readonly) NSString *alertSubtitleForFailingToMoveAccountsBackToPersonalKeychainWhileLeavingGroup;
@property (class, nonatomic, readonly) NSString *alertTitleForFailingToMoveAccountsBackToPersonalKeychainWhileDeletingGroup;
@property (class, nonatomic, readonly) NSString *alertSubtitleForFailingToMoveAccountsBackToPersonalKeychainWhileDeletingGroup;
@property (class, nonatomic, readonly) NSString *alertTitleForUnavailableGroup;
@property (class, nonatomic, readonly) NSString *alertSubtitleForUnavailableGroup;

+ (id)alertSubtitleForFailingToMoveSavedAccounts:(id)a0 toGroupWithName:(id)a1;
+ (id)alertTitleForFailingToAcceptInvitationWithError:(id)a0;
+ (id)alertTitleForFailingToAddGroupMemberWithError:(id)a0;
+ (id)alertTitleForFailingToCreateGroupWithError:(id)a0;
+ (id)alertTitleForFailingToDeclineInvitationWithError:(id)a0;
+ (id)alertTitleForFailingToDeleteGroupWithError:(id)a0;
+ (id)alertTitleForFailingToLeaveGroupWithError:(id)a0;
+ (id)alertTitleForFailingToRemoveGroupMemberWithError:(id)a0;
+ (id)alertTitleForFailingToUpdateGroupWithError:(id)a0;
+ (id)alertTitleForMovingSavedAccount:(id)a0 toGroupWithName:(id)a1;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)a0 fromGroupWithName:(id)a1;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)a0 toMyPasswordsFromGroup:(id)a1;
+ (id)confirmationAlertSubtitleForRemovingGroupMemberWithName:(id)a0;
+ (id)confirmationAlertTitleForRemovingGroupMemberWithName:(id)a0;
+ (id)declineGroupInvitationAlertTitleForGroupWithName:(id)a0 fromKnownSender:(BOOL)a1;
+ (id)groupExitWarningAlertTitleWithGroupMemberNames:(id)a0;
+ (id)warningAlertMessageForMovingNumberOfReusedPasswords:(long long)a0 withTotalNumberOfAccountsSelected:(long long)a1;
+ (id)warningAlertTitleForMovingNumberOfReusedPasswords:(long long)a0 withTotalNumberOfAccountsSelected:(long long)a1;
+ (id)alertTitleAndSubtitleForMovingSavedAccounts:(id)a0 toGroupWithName:(id)a1;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)a0 fromMyPasswordstoGroupWithName:(id)a1;
+ (id)warningAlertSubtitleTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccountsAfterRemovalWithName:(id)a0;
+ (id)warningAlertTitleTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccountsAfterRemovalWithName:(id)a0;

- (id)init;

@end
