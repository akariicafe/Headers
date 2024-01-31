@class NSString;

@interface PMOngoingCredentialSharingStrings : NSObject

@property (class, readonly, copy, nonatomic) NSString *cannotChangePermissionForGroupMemberTitle;
@property (class, readonly, copy, nonatomic) NSString *preventReadOnlyPermissionForGroupMemberThatHasContributedPasswordsExplanationFooter;
@property (class, readonly, copy, nonatomic) NSString *groupCreationViewSubtitleString;
@property (class, readonly, copy, nonatomic) NSString *groupManagementViewSubtitleStringForOwner;
@property (class, readonly, copy, nonatomic) NSString *groupManagementViewSubtitleStringForNonOwner;
@property (class, readonly, copy, nonatomic) NSString *newGroupViewTitle;

+ (id)pickerTitleForNumberOfSelectedAccounts:(unsigned long long)a0;

@end
