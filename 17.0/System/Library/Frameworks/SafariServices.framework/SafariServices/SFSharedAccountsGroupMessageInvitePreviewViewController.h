@class KCSharingGroup, NSArray;
@protocol SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate;

@interface SFSharedAccountsGroupMessageInvitePreviewViewController : OBWelcomeController

@property (readonly, nonatomic) KCSharingGroup *group;
@property (readonly, nonatomic) NSArray *invitedGroupMemberData;
@property (weak, nonatomic) id<SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_setUpContentView;
- (void)_addContinueAndCancelButtonsToButtonTray;
- (void)_cancelButtonSelected;
- (void)_continueButtonSelected;
- (id)initWithGroup:(id)a0 invitedGroupMemberData:(id)a1;

@end
