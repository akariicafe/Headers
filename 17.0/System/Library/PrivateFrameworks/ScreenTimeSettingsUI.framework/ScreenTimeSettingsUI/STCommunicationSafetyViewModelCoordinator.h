@class STCommunicationSafetyViewModel, NSString, STGroupFetchedResultsController, NSNumber, NSManagedObjectID;
@protocol STPersistenceControllerProtocol;

@interface STCommunicationSafetyViewModelCoordinator : NSObject <STCommunicationSafetyViewModelCoordinator, STGroupFetchedResultsControllerDelegate>

@property (copy, nonatomic) NSNumber *userDSID;
@property (readonly, nonatomic) id<STPersistenceControllerProtocol> persistenceController;
@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController;
@property (copy) id /* block */ modelUpdatedHandler;
@property (readonly) STCommunicationSafetyViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)groupResultsController:(id)a0 didChangeResultsForRequest:(id)a1 objectID:(id)a2 changeType:(unsigned long long)a3;
- (void)_loadViewModel;
- (void)_registerForPersistentStoreNotifications;
- (void)_reportCoreAnalyticsEventCommunicationSafetyEnabled:(BOOL)a0;
- (id)initWithPersistenceController:(id)a0 userDSID:(id)a1;
- (id)initWithPersistenceController:(id)a0 userDSID:(id)a1 modelUpdatedHandler:(id /* block */)a2;
- (void)persistCommunicationSafetySettingsWithCompletionHandler:(id /* block */)a0;
- (void)saveCommunicationSafetyReceivingRestricted:(BOOL)a0 communicationSafetySendingRestricted:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
