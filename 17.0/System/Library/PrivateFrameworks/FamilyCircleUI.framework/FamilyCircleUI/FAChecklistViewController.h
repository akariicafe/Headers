@class UIViewController, ACAccount, FAProfilePictureStore, FMFSession, STSetupClient, NSString, UILabel, AAUICustodianSetupFlowController, HKMedicalIDStore, NSMutableDictionary, RemoteUIController, NSArray, _TtC14FamilyCircleUI17LocationViewModel, HKHealthStore, _HKMedicalIDData, NSSet, NSOperationQueue, AIDAAccountManager, FASettingsPresetsResponse, AACustodianController, UINavigationItem, FAFamilyCircle, ACAccountStore, NSURL, NSDate, FAChecklistStore;
@protocol FAChecklistViewControllerDelegate, _TtP14FamilyCircleUI33FACheckListHostControllerProtocol_;

@interface FAChecklistViewController : UIViewController <HKMedicalIDViewControllerDelegate, AAUICustodianSetupFlowControllerDelegate, HKMedicalIDEmergencyContactFlowDelegate> {
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    FMFSession *_session;
    unsigned long long _countMembersWithLocation;
    unsigned long long _countEmergencyContacts;
    _HKMedicalIDData *_medicalIDData;
    NSArray *_currEmergencyContacts;
    NSMutableDictionary *_childrenInFamily;
    NSMutableDictionary *_childPresetRecord;
    NSMutableDictionary *_existingChildPresetRecord;
    FASettingsPresetsResponse *_existingChildPresetResponse;
    NSArray *_listOfChildren;
    AIDAAccountManager *_accountManager;
    AAUICustodianSetupFlowController *_custodianSetupFlowController;
    ACAccountStore *_store;
    ACAccount *_appleAccount;
    NSOperationQueue *_networkActivityQueue;
    RemoteUIController *_remoteUIViewController;
    AACustodianController *_custodianController;
    STSetupClient *_setupClient;
    NSArray *_custodians;
    BOOL _isMissingParentContact;
    NSSet *_membersWithLocation;
    unsigned long long _countMembersIcloudPlus;
    NSURL *_icloudPlusUrl;
    _TtC14FamilyCircleUI17LocationViewModel *_locationViewModel;
    NSDate *_screenTimeModifiedDate;
    NSDate *_commLimitsModifiedDate;
    NSMutableDictionary *_screenTimeModifiedRecord;
    NSMutableDictionary *_commLimitsModifiedRecord;
    NSArray *_specifiers;
    UIViewController<_TtP14FamilyCircleUI33FACheckListHostControllerProtocol_> *_checklistHostController;
    UINavigationItem *_navItem;
    UILabel *_navigationBarTitleLabel;
    BOOL _isNavigationTitleViewDisplayed;
    BOOL _isFirstSpecifierLoad;
    NSString *_organizerName;
    NSMutableDictionary *_parentalControlsForChildren;
    NSMutableDictionary *_commLimitsForChildren;
}

@property (retain, nonatomic) FAFamilyCircle *familyCircle;
@property (retain, nonatomic) FAProfilePictureStore *profilePictureStore;
@property (retain, nonatomic) FAChecklistStore *checklistStore;
@property (weak, nonatomic) id<FAChecklistViewControllerDelegate> delegate;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)reloadSpecifiers;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidFinish:(id)a0;
- (void)emergencyContactFlow:(id)a0 didSelectContact:(id)a1;
- (void)emergencyContactFlowDidCancel:(id)a0;
- (void)custodianSetupFlowControllerDidFinish:(id)a0;
- (void)_updateICloudPlusSpecifierThen:(id /* block */)a0;
- (id)_childrenRecord;
- (void)_gotLocationChangedNotification;
- (void)_updateScreenTimeSpecifierThen:(id /* block */)a0;
- (void)_checkAndReloadAllSpecifiers;
- (void)_checklistHeaderView;
- (id)_childCommunicationLimitsForContactManagement:(id)a0;
- (id)_childContactsRecord:(id)a0;
- (id)_childPresetSpecifiers:(id)a0;
- (int)_contactsStatusForChild:(id)a0;
- (id)_custodianContactSpecifiers;
- (void)_fetchCommunicationLimitsModifiedDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchPresetsForChild:(id)a0 andCompletionHandler:(id /* block */)a1;
- (void)_fetchScreenTimeModifiedDate:(id)a0 completionHandler:(id /* block */)a1;
- (id)_getOrganizer;
- (id)_icloudPlusSpecifiers:(id)a0;
- (id)_locationSpecifiersWithSharedCount:(unsigned long long)a0;
- (void)_manageChildContactsWasTapped:(id)a0;
- (id)_medicalSpecifiersWithMedicalIDData;
- (void)_reviewPresetsWasTapped:(id)a0;
- (void)_setupCustodianTapped:(id)a0;
- (void)_setupIcloudPlusWasTapped:(id)a0;
- (void)_setupNavigationBarTitleView;
- (void)_shareMyLocationButtonWasTapped:(id)a0;
- (void)_updateCommunicationLimitsSpecifierThen:(id /* block */)a0;
- (void)_updateCustodianSpecifierThen:(id /* block */)a0;
- (void)_updateLocationSpecifierThen:(id /* block */)a0;
- (void)_updateMedicalIDButtonWasTapped:(id)a0;
- (void)_updateMedicalSpecifierThen:(id /* block */)a0;
- (id)initWithAccountManager:(id)a0 familyCircle:(id)a1 profilePictureStore:(id)a2 checklistStore:(id)a3;

@end
