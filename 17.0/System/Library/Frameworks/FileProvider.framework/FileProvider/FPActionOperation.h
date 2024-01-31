@class FPItem, NSString, NSArray, NSSet, FPItemManager, NSDictionary, FPService, NSProgress, FPStitchingSession;
@protocol FPXOperationService;

@interface FPActionOperation : FPOperation <NSProgressReporting> {
    NSDictionary *_itemsByDomainID;
    NSString *_providerIdentifier;
    BOOL _multiProviders;
    unsigned long long _logSection;
    FPStitchingSession *_stitcher;
    unsigned long long _attemptedRecoveryCount;
}

@property (retain, nonatomic) FPService<FPXOperationService> *remoteService;
@property (readonly, nonatomic) id<FPXOperationService> remoteServiceProxy;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL setupRemoteOperationService;
@property (nonatomic) BOOL haveErrorRecovery;
@property (nonatomic) BOOL havePreflight;
@property (nonatomic) BOOL haveStitching;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *sourceItemsToPreflight;
@property (copy, nonatomic) NSSet *sourceItemKeysAllowList;
@property (copy, nonatomic) NSSet *destinationItemKeysAllowList;
@property (copy, nonatomic) FPItem *destinationItemToPreflight;
@property (nonatomic) BOOL finishAfterPreflight;
@property (nonatomic) BOOL skipPreflight;
@property (copy, nonatomic) id /* block */ placeholdersCreationBlock;
@property (copy, nonatomic) id /* block */ actionCompletionBlock;
@property (copy, nonatomic) id /* block */ errorRecoveryHandler;
@property (retain, nonatomic) FPItemManager *itemManager;
@property (readonly, nonatomic) FPStitchingSession *stitcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newArrayRemovingFirstElement:(id)a0;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)operationDescription;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_dispatchToSubOperations;
- (void)_preflightAndRun;
- (void)_runUserInteractionsPreflight:(id /* block */)a0;
- (void)actionMain;
- (id)initWithItemsOfDifferentProviders:(id)a0 action:(id)a1;
- (id)initWithProvider:(id)a0 action:(id)a1;
- (void)invokeErrorRecoveryHandlerWithService:(id)a0 fpProviderDomainId:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)presendNotifications;
- (id)replicateForItems:(id)a0;
- (void)resetStitcher;
- (void)runUserInteractionsPreflight:(id /* block */)a0;
- (void)subclassPreflightWithCompletion:(id /* block */)a0;
- (void)tryRecoveringFromError:(id)a0 completion:(id /* block */)a1;
- (void)tryRecoveringFromPreflightErrors:(id)a0 recoveryHandler:(id /* block */)a1 completion:(id /* block */)a2;

@end
