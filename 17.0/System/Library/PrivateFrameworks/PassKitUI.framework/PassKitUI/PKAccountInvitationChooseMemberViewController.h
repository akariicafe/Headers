@class FACircleStateController, PKTableHeaderView, NSNumberFormatter, PKTableViewDiffableDataSource, NSDictionary, UITableView, NSPersonNameComponentsFormatter, PKOSVersionRequirementRange, PKAccountInvitationController, PKPaymentSetupDockView, NSString, NSArray, _PKVisibilityBackdropView, NSIndexPath;

@interface PKAccountInvitationChooseMemberViewController : UIViewController <UITableViewDelegate, UITableViewDelegatePrivate, _PKVisibilityBackdropViewDelegate, PKDeviceSharingCapabilitiesManagerObserver, PKAccountInvitationControllerObserver, PKViewControllerPreflightable> {
    PKAccountInvitationController *_controller;
    NSDictionary *_familyMemberPhotosByAltDSID;
    NSDictionary *_pendingFamilyMemberImagesByEmail;
    NSPersonNameComponentsFormatter *_nameFormatter;
    NSNumberFormatter *_ageFormatter;
    PKTableHeaderView *_headerView;
    UITableView *_tableView;
    double _previousHeaderHeight;
    NSIndexPath *_loadingInvitationIndexPath;
    NSArray *_totalFamilyMembers;
    NSArray *_pendingFamilyMembers;
    PKOSVersionRequirementRange *_requiredOSVersionRange;
    long long _minimumParticipantAge;
    NSNumberFormatter *_maximumAccountUsersFormatter;
    PKTableViewDiffableDataSource *_diffableDataSource;
    FACircleStateController *_stateController;
    PKPaymentSetupDockView *_dockView;
    _PKVisibilityBackdropView *_blurringView;
    double _backdropWeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableViewDidFinishReload:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)deviceSharingCapabilitiesUpdated:(id)a0 maximumPossibleDevices:(long long)a1 forAppleID:(id)a2;
- (void)deviceSharingCapabilitiesUpdated:(id)a0 newSharingCapabilties:(id)a1 forAppleID:(id)a2;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_filterAvailableFamilyMembersFromMembers:(id)a0;
- (void)_handleAddPersonTapped;
- (void)_openFamilyMemberSettings;
- (void)_reloadFamilyCollectionWithForceReload:(BOOL)a0 completion:(id /* block */)a1;
- (void)_reportAnalyticsViewDidAppear:(BOOL)a0;
- (void)_setLoadingIndexPath:(id)a0;
- (void)_updateHeaderFooterText;
- (void)_updateSnapshotAnimated:(BOOL)a0;
- (void)didUpdateInvitationControllerFamilyCircle;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;

@end
