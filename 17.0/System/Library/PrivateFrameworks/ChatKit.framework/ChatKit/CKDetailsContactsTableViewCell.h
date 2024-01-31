@class UIActivityIndicatorView, NSString, CNContact, CKLabel, UILabel, CKAvatarView, UIButton;
@protocol CKDetailsContactsTableViewCellDelegate;

@interface CKDetailsContactsTableViewCell : CKDetailsCell

@property (retain, nonatomic) CKLabel *nameLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *expanseStatusLabel;
@property (retain, nonatomic) CKAvatarView *contactAvatarView;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) BOOL tuConversationStatusIsActive;
@property (nonatomic) long long callType;
@property (nonatomic) BOOL showsLocation;
@property (nonatomic) BOOL showMessageButton;
@property (nonatomic) BOOL showPhoneButton;
@property (nonatomic) BOOL showFaceTimeVideoButton;
@property (nonatomic) BOOL showInfoButton;
@property (nonatomic) BOOL showScreenSharingButton;
@property (nonatomic) BOOL showsTUConversationStatus;
@property (retain, nonatomic) UIButton *messageButton;
@property (retain, nonatomic) UIButton *phoneButton;
@property (retain, nonatomic) UIButton *facetimeVideoButton;
@property (retain, nonatomic) UIButton *screenSharingButton;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIActivityIndicatorView *updatingParticipantSpinner;
@property (weak, nonatomic) id<CKDetailsContactsTableViewCellDelegate> delegate;

+ (Class)cellClass;
+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (double)marginWidth;
+ (double)estimatedHeight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_showUpdatingParticipantSpinner;
- (void)_hideAllButtons;
- (id)_ckSymbolImageNamed:(id)a0 preferredContentSizeCategory:(id)a1 preferredFontTextStyle:(id)a2;
- (void)_configureButtonLayer:(id)a0;
- (void)_dismissUpdatingParticipantSpinner;
- (void)_formatExpanseStatusLabel;
- (void)_handleCommunicationAction:(id)a0;
- (id)_imageNamed:(id)a0;
- (void)_updateVisibleButtons;
- (void)configureWithViewModel:(id)a0;
- (void)didHoverOverCell:(id)a0;

@end
