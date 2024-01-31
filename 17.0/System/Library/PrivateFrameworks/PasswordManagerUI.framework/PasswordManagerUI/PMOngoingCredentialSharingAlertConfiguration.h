@class NSString;

@interface PMOngoingCredentialSharingAlertConfiguration : NSObject

@property (class, readonly, copy, nonatomic) NSString *groupDeletionConfirmationAlertTitle;
@property (class, readonly, copy, nonatomic) NSString *groupDeletionConfirmationAlertSubtitle;
@property (class, readonly, copy, nonatomic) NSString *leaveGroupConfirmationAlertTitle;
@property (class, readonly, copy, nonatomic) NSString *leaveGroupConfirmationAlertSubtitle;
@property (class, readonly, copy, nonatomic) NSString *groupDeletionWarningAlertSubtitle;
@property (class, readonly, copy, nonatomic) NSString *leaveGroupWarningAlertSubtitle;
@property (class, readonly, copy, nonatomic) NSString *alertTitleForFailingToMoveAccountsBackToPersonalKeychainWhileLeavingGroup;
@property (class, readonly, copy, nonatomic) NSString *alertSubtitleForFailingToMoveAccountsBackToPersonalKeychainWhileLeavingGroup;
@property (class, readonly, copy, nonatomic) NSString *alertTitleForFailingToMoveAccountsBackToPersonalKeychainWhileDeletingGroup;
@property (class, readonly, copy, nonatomic) NSString *alertSubtitleForFailingToMoveAccountsBackToPersonalKeychainWhileDeletingGroup;

+ (id)alertSubtitleForFailingToMoveSavedAccounts:(id)a0 toGroupWithName:(id)a1;
+ (id)alertSubtitleForUnavailableGroup;
+ (id)alertTitleForFailingToAcceptInvitationWithError:(id)a0;
+ (id)alertTitleForFailingToAddGroupMemberWithError:(id)a0;
+ (id)alertTitleForFailingToCreateGroupWithError:(id)a0;
+ (id)alertTitleForFailingToDeclineInvitationWithError:(id)a0;
+ (id)alertTitleForFailingToDeleteGroupWithError:(id)a0;
+ (id)alertTitleForFailingToLeaveGroupWithError:(id)a0;
+ (id)alertTitleForFailingToMoveToGroup;
+ (id)alertTitleForFailingToRemoveGroupMemberWithError:(id)a0;
+ (id)alertTitleForFailingToUpdateGroupWithError:(id)a0;
+ (id)alertTitleForMovingSavedAccount:(id)a0 toGroupWithName:(id)a1;
+ (id)alertTitleForUnavailableGroup;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)a0 fromGroupWithName:(id)a1;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)a0 fromMyPasswordsToGroupWithName:(id)a1;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)a0 toMyPasswordsFromGroup:(id)a1;
+ (id)confirmationAlertSubtitleForRemovingGroupMemberWithName:(id)a0;
+ (id)confirmationAlertTitleAndSubtitleForMovingSavedAccounts:(id)a0 toGroupWithName:(id)a1;
+ (id)confirmationAlertTitleForRemovingGroupMemberWithName:(id)a0;
+ (id)declineGroupInvitationAlertTitleForGroupWithName:(id)a0 fromKnownSender:(BOOL)a1;
+ (id)groupExitWarningAlertTitleWithGroupMemberNames:(id)a0;
+ (id)warningAlertMessageForMovingNumberOfReusedPasswords:(long long)a0 withTotalNumberOfAccountsSelected:(long long)a1;
+ (id)warningAlertSubtitleTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccountsAfterRemoval:(id)a0;
+ (id)warningAlertTitleForMovingNumberOfReusedPasswords:(long long)a0 withTotalNumberOfAccountsSelected:(long long)a1;
+ (id)warningAlertTitleTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccountsAfterRemoval:(id)a0;

@end
