@class CNContactFormatter, NSString, CNContact, NSArray, HFContactController, HMIncomingHomeInvitation;
@protocol HUInvitationHelperDelegate;

@interface HUInvitationHelper : NSObject <HFContactControllerDelegate>

@property (retain, nonatomic) HFContactController *contactsController;
@property (retain, nonatomic) NSString *inviterID;
@property (retain, nonatomic) CNContact *inviterContact;
@property (retain, nonatomic) CNContactFormatter *contactsFormatter;
@property (nonatomic) BOOL isUnknownContact;
@property (retain, nonatomic) NSArray *familyMembers;
@property (weak, nonatomic) id<HUInvitationHelperDelegate> delegate;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) HMIncomingHomeInvitation *invitation;
@property (readonly, nonatomic) NSString *homeInvitationTitle;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatter;
+ (id)_dateFormatter;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_updateInviterContactInfo;
- (void)contactController:(id)a0 didFinishDownloadingFamilyMemberAvatar:(id)a1;
- (id)requiredKeyDescriptors;

@end
