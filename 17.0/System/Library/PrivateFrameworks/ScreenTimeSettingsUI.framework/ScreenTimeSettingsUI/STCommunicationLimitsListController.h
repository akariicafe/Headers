@class PSSpecifier, CNUIFamilyMemberContactsController, NSString, STCommunicationLimits;

@interface STCommunicationLimitsListController : STPINListViewController <CNUIFamilyMemberContactsPresentation>

@property (retain) PSSpecifier *duringScreenTimeSpecifier;
@property (retain) PSSpecifier *duringDowntimeSpecifier;
@property (retain) PSSpecifier *manageContactsGroupSpecifier;
@property (retain) PSSpecifier *manageContactsSpecifier;
@property (retain) PSSpecifier *iCloudContactsSpecifier;
@property (retain) PSSpecifier *allowContactEditingSpecifier;
@property (retain) STCommunicationLimits *communicationLimits;
@property (retain) CNUIFamilyMemberContactsController *familyMemberContactsController;
@property BOOL syncingiCloudContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void)presentViewController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)dismissPresentedViewController:(id)a0;
- (void)familyMemberContactsDidChange;
- (void)_didFinishSyncingiCloudContacts;
- (id)_totaliCloudContactsDetailText:(id)a0;
- (void)_didCancelSyncingiCloudContacts;
- (id)_allowContactEditing:(id)a0;
- (void)_communicationLimitsDidChangeFrom:(id)a0 to:(id)a1;
- (void)_didStartSyncingiCloudContacts;
- (void)_enableAllowContactEditingSwitch:(BOOL)a0;
- (void)_indicateiCloudContactsSyncingStatus;
- (id)_manageContacts:(id)a0;
- (id)_manageContactsGroupFooterText;
- (void)_setAllowContactEditing:(id)a0 specifier:(id)a1;
- (void)_setManageContacts:(id)a0 specifier:(id)a1;
- (void)_startSyncingiCloudContacts;
- (id)_statusPendingDetailText:(id)a0;
- (void)_updateAllowContactEditing:(id)a0;
- (void)_updateAllowContactEditingWithAlertIfNeeded:(id)a0 forSpecifier:(id)a1;
- (void)_updateManageContactsGroupFooterView;
- (id)initWithRootViewModelCoordinator:(id)a0;

@end
