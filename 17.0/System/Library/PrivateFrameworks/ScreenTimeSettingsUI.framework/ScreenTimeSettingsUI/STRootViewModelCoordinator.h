@class STRootViewModel, NSString, STAdminPersistenceController, NSMutableDictionary, STGroupFetchedResultsController, NSNumber, NSObject;
@protocol STContentPrivacyViewModelCoordinator, STCommunicationSafetyViewModelCoordinator, STUsageDetailsViewModelCoordinator, STEyeReliefViewModelCoordinator, STTimeAllowancesViewModelCoordinator;

@interface STRootViewModelCoordinator : NSObject <STRestrictionsDataSourceProtocol, STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) STAdminPersistenceController *persistenceController;
@property (retain, nonatomic) STRootViewModel *viewModel;
@property (retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController;
@property (retain, nonatomic) NSMutableDictionary *coordinatorsByChildDSID;
@property (copy, nonatomic) NSNumber *userDSID;
@property (readonly, copy) NSString *deviceIdentifier;
@property (readonly, copy) NSNumber *usageReportType;
@property (readonly) long long usageContext;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) BOOL isLocalUser;
@property (nonatomic) BOOL hasAlreadyEnteredPINForSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property (readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property (readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (readonly) NSObject<STCommunicationSafetyViewModelCoordinator> *communicationSafetyCoordinator;
@property (readonly) NSObject<STEyeReliefViewModelCoordinator> *eyeReliefCoordinator;
@property (nonatomic) BOOL hasShownMiniBuddy;
@property (readonly, nonatomic, getter=isPasscodeEnabled) BOOL passcodeEnabled;

+ (id)keyPathsForValuesAffectingPasscodeEnabled;
+ (id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+ (id)loadViewModelFromManagedObjectContext:(id)a0 isLocalUser:(BOOL)a1 userDSID:(id)a2 error:(id *)a3;

- (id)init;
- (void)setScreenTimeSyncingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)validatePIN:(id)a0;
- (void)setScreenTimeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)groupResultsControllerDidChangeContents:(id)a0;
- (id)initWithUserDSID:(id)a0 deviceIdentifier:(id)a1 usageReportType:(id)a2 usageContext:(long long)a3;
- (void)_passcodeSessionHasEnded:(id)a0;
- (void)_registerForPersistentStoreNotifications;
- (void)_registerForWillResignActiveNotifications;
- (void)_reportCoreAnalyticsEventScreenTimeEnabled:(BOOL)a0 user:(id)a1 userType:(unsigned long long)a2 userIsRemote:(BOOL)a3;
- (void)_setPIN:(id)a0 recoveryAltDSID:(id)a1 shouldSetRecoveryAppleID:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)applyIntroductionViewModel:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)coordinatorForChild:(id)a0 deviceIdentifier:(id)a1 usageReportType:(id)a2;
- (id)defaultValueForRestrictionIdentifier:(id)a0;
- (void)enableManagementWithPIN:(id)a0 recoveryAltDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadValuesByRestrictionWithCompletionHandler:(id /* block */)a0;
- (void)loadViewModelRightNow;
- (void)loadViewModelWithCompletionHandler:(id /* block */)a0;
- (id)organizationIdentifierForManagement;
- (id)organizationIdentifierForUsage;
- (void)saveViewModel:(id)a0;
- (void)setManagementEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setPIN:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPIN:(id)a0 recoveryAltDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setShareWebUsageEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
