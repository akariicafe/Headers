@class NSUUID, NSString, LNActionExecutor, LNAction;

@interface DNDSAppFocusConfigurationTask : NSObject <LNActionExecutorDelegate> {
    LNAction *_action;
    LNActionExecutor *_executor;
    id /* block */ _completion;
}

@property (readonly, nonatomic) NSUUID *taskIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskIdentifier;
- (void)execute;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1;
- (id)_executorCreatingIfNeeded;
- (id)_malformedIntentErrorWithMessage:(id)a0;

@end
