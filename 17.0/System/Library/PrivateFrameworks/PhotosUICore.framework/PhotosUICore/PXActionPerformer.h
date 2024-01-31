@class NSString, NSUndoManager, NSObject;
@protocol PXAnonymousViewController, PXActionPerformerDelegate, PXPresentationEnvironment;

@interface PXActionPerformer : NSObject <PXActivityActionDelegate> {
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *activitySystemImageName;
@property (readonly, nonatomic) long long menuElementState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *hostViewController;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) BOOL success;
@property (weak, nonatomic) id sender;
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PXActionPerformerDelegate> delegate;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *presentedViewController;
@property (retain, nonatomic) id<PXPresentationEnvironment> presentationEnvironment;
@property (readonly, nonatomic) BOOL presentsMenu;
@property (readonly, nonatomic) BOOL shouldPreventTargetedDismissalAnimation;
@property (readonly, nonatomic) BOOL canPresentAlertInBackgroudState;

- (void)performActivity:(id)a0;
- (id)init;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activity;
- (void)performUserInteractionTask;
- (BOOL)presentViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)performerResetsAfterCompletion;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)menuElement;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithActionType:(id)a0;
- (BOOL)pushViewController:(id)a0;
- (id)barButtonItemWithTarget:(id)a0 action:(SEL)a1;
- (void)_completeStateWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_completeUnlockTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_performUnlockIfNeeded;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedSubtitleForUseCase:(unsigned long long)a0;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (void)performBackgroundTask;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (BOOL)presentAlertWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)presentAlertWithTitle:(id)a0 message:(id)a1 radarConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)requiresUnlockedDevice;

@end
