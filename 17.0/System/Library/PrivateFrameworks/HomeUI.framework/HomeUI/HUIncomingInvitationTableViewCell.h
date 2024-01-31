@class UILabel, CNAvatarView, NSArray, HUInvitationHelper, NSString, UIButton, CNContact, HMIncomingHomeInvitation, HFContactController, UIActivityIndicatorView, UIButtonConfiguration;
@protocol HUIncomingInvitationTableViewCellDelegate;

@interface HUIncomingInvitationTableViewCell : UITableViewCell <HUInvitationHelperDelegate>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UILabel *homeNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *viewButton;
@property (retain, nonatomic) UIButtonConfiguration *knownContactViewButtonConfiguration;
@property (retain, nonatomic) UIButton *reportJunkButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) HUInvitationHelper *invitationHelper;
@property (retain, nonatomic) HFContactController *contactsController;
@property (retain, nonatomic) NSArray *familyMembers;
@property (retain, nonatomic) HMIncomingHomeInvitation *invitation;
@property (nonatomic) BOOL showSpinner;
@property (weak, nonatomic) id<HUIncomingInvitationTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)closeButtonPressed:(id)a0;
- (void)_hideInvitationSpinner;
- (void)_setupDynamicConstraints;
- (void)_showInvitationSpinner;
- (void)_updateInvitationViews;
- (void)declineButtonPressed:(id)a0;
- (void)invitationUtilityDidUpdateInformation:(id)a0;
- (void)reportJunkPressed:(id)a0;
- (void)viewButtonPressed:(id)a0;

@end
