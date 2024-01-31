@class DSAppSharing, _HKEmergencyContact, HKMedicalIDEmergencyContactFlow, NSArray, HKHealthStore, NSString, HKMedicalIDStore, _HKMedicalIDData;
@protocol DSNavigationDelegate;

@interface DSEmergencySOSController : DSTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HKMedicalIDEmergencyContactFlowDelegate, DSController>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKMedicalIDStore *medicalIDStore;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSArray *emergencyContacts;
@property (retain, nonatomic) _HKEmergencyContact *selectedEmergencyContact;
@property (retain, nonatomic) HKMedicalIDEmergencyContactFlow *contactFlow;
@property BOOL hasRetriedEmergencyContactFetch;
@property (retain, nonatomic) DSAppSharing *appSharing;
@property (retain, nonatomic) NSString *kappaApprovedAppID;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)emergencyContactFlow:(id)a0 didSelectContact:(id)a1;
- (void)emergencyContactFlowDidCancel:(id)a0;
- (void)_showMaxContactsAlert;
- (void)chooseNewEmergencyContact;
- (void)gatherEmergencyContacts;
- (BOOL)hasAppWithKappaApproved;
- (BOOL)maybeRetryDueToError:(id)a0 withReason:(id)a1;
- (void)removeEmergencyContact:(id)a0;
- (void)revokeKappaPermission;
- (void)updateKappaBundleID;

@end
