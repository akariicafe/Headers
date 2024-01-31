@class FBSystemService, SBRestartTransitionRequest, NSMutableSet, SBInitialRestartState, BSTransaction, SBStartupTransitionController;
@protocol SBStartupTransition, SBRestartManagerDelegate, SBRestartManagerWorkspaceDataSource;

@interface SBRestartManager : NSObject {
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionController *_startupController;
    id<SBRestartManagerWorkspaceDataSource> _workspaceDataSource;
    BOOL _isShuttingDown;
    BOOL _isRestartImminent;
    NSMutableSet *_pendingExternallyControlledRestartReasons;
    FBSystemService *_systemService;
}

@property (weak, nonatomic) id<SBRestartManagerDelegate> delegate;
@property (readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition;
@property (readonly, nonatomic) SBRestartTransitionRequest *pendingRestartTransitionRequest;
@property (readonly, nonatomic, getter=isPendingExit) BOOL pendingExit;

- (void)_postShutdownNotification;
- (void)_killAllAppsForPendingExitWithReason:(long long)a0 description:(id)a1 expiration:(double)a2 completion:(id /* block */)a3;
- (id)init;
- (void)_restartWithTransitionRequest:(id)a0;
- (void)shutdownWithContext:(id)a0;
- (void)_reallyRestartWithTransitionRequest:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)rebootWithContext:(id)a0;
- (void)_shutdownSoundDidComplete:(id)a0 completion:(id /* block */)a1;
- (void)___waitForeverForRunningBoardKill;
- (void)_doRestartForTransition:(int)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_isPendingExitIncludingExternallyControlledReasons:(BOOL)a0;
- (void)_persistStartupTransitionContextFromRestartRequest:(id)a0;
- (void)_removePendingExternallyControlledRestartReason:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_persistStartupTransitionContextFromShutdownContext:(id)a0;
- (void)initializeAndRunStartupTransition:(id /* block */)a0;
- (void)_playShutdownSound:(id /* block */)a0;
- (void)_addPendingExternallyControlledRestartReason:(id)a0;
- (void)rebootForReason:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)restartWithTransitionRequest:(id)a0;
- (id)initWithWorkspaceDataSource:(id)a0 initialRestartState:(id)a1;
- (id)startupTransition;
- (void)_persistStartupTransitionContextFromRebootContext:(id)a0;
- (void)_exitIsImminent;
- (void)shutdownForReason:(id)a0;
- (void)_shutdownUsingOptions:(id)a0;
- (id)_initWithWorkspaceDataSource:(id)a0 initialRestartState:(id)a1 startupController:(id)a2 systemService:(id)a3;

@end
