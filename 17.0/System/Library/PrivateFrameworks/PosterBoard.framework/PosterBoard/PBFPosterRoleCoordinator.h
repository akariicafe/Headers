@class NSSet, NSString, PRPosterCollection;
@protocol PBFPosterExtensionDataStorageRetrieving, PBFModelCoordinatorProviding, PBFPosterRoleCoordinatorDelegate;

@interface PBFPosterRoleCoordinator : NSObject <PBFPosterRoleCoordinating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _transactionLock;
    BOOL _transactionLock_isInTransaction;
}

@property (class, readonly, nonatomic) NSSet *supportedAttributes;
@property (class, readonly, nonatomic) NSSet *protectedAttributes;
@property (class, readonly, nonatomic) NSSet *subscribedEvents;
@property (class, readonly, nonatomic) NSSet *supportedChangeTypes;

@property (retain, nonatomic) PRPosterCollection *posterCollection;
@property (readonly) id<PBFPosterExtensionDataStorageRetrieving> storage;
@property (readonly) id<PBFModelCoordinatorProviding> modelCoordinatorProvider;
@property (weak) id<PBFPosterRoleCoordinatorDelegate> delegate;
@property (readonly) NSString *role;
@property unsigned long long maximumNumberOfPosters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInitialStateSetupEventsForRoleCoordinator:(id)a0 extensionHandlers:(id)a1 extensionStoreCoordinators:(id)a2;
+ (void)dumpResultsForEvent:(id)a0 role:(id)a1 posterCollection:(id)a2 changes:(id)a3 eventWasHandled:(BOOL)a4;
+ (BOOL)supportsSupplementalUpdates;

- (void)invalidate;
- (void).cxx_destruct;
- (id)posterWithUUID:(id)a0;
- (id)configurationStoreCoordinatorForPosterUUID:(id)a0 extensionIdentifier:(id)a1;
- (BOOL)_executeChange:(id)a0 storage:(id)a1 outEvents:(out id *)a2 error:(out id *)a3;
- (BOOL)_ingestIncomingPosterConfiguration:(id)a0 change:(id)a1 currentCollection:(id)a2 storage:(id)a3 outEvents:(out id *)a4 error:(out id *)a5;
- (BOOL)_prepareAttributesForIngestionForPoster:(id)a0 existingAttributes:(id)a1 incomingAttributes:(id)a2 proposedAttributesToDelete:(out id *)a3 proposedAttributesToUpdate:(out id *)a4 storage:(id)a5 currentCollection:(id)a6 error:(out id *)a7;
- (id)attributesForConfiguration:(id)a0 ofType:(id)a1 storage:(id)a2;
- (id)buildNewPosterCollectionFromStorage:(id)a0;
- (id)defaultAttributesForNewPosterFromProvider:(id)a0;
- (id)determineActivePosterConfigurationForContext:(id)a0;
- (id)determineActivePosterConfigurationForStorage:(id)a0 context:(id)a1;
- (BOOL)finalizeChangesWithChangeHandler:(id)a0 outEvents:(out id *)a1 error:(out id *)a2;
- (id)initWithRole:(id)a0 storage:(id)a1 modelCoordinatorProvider:(id)a2;
- (id)lastActivatedDatesForPosterCollection:(id)a0;
- (void)noteDidResetRoleCoordinator:(id)a0;
- (BOOL)notifyEventWasReceived:(id)a0 changes:(out id *)a1 storage:(id)a2;
- (id)posterConfigurationsSortedByLastActivatedDate:(id)a0;
- (id)posterWithUUID:(id)a0 extensionIdentifier:(id)a1;
- (id)setupRoleIfNecessaryWithStorage:(id)a0;
- (id)sortedPosterUUIDsFromStorage:(id)a0;
- (BOOL)synchronizeFileSystemAttributesForStorage:(id)a0 error:(out id *)a1;
- (BOOL)updateCoordinatorWithChange:(id)a0 changeHandler:(id)a1 emitEvents:(out id *)a2 error:(out id *)a3;
- (BOOL)validateEventIsRelevent:(id)a0;

@end
