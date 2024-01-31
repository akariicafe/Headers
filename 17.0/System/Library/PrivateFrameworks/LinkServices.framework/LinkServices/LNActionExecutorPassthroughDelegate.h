@class NSString;
@protocol LNActionExecutorDelegate;

@interface LNActionExecutorPassthroughDelegate : NSObject <LNActionExecutorDelegate>

@property (readonly, weak, nonatomic) id<LNActionExecutorDelegate> delegate;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 continueInAppWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 didPerformActionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 environmentForViewSnippetWithCompletion:(id /* block */)a1;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (void)executor:(id)a0 preferredContentSizeForViewSnippetWithCompletion:(id /* block */)a1;
- (BOOL)executor:(id)a0 shouldRunShowOutputAction:(id)a1;
- (id)initWithShowOutputActionDelegate:(id)a0 performCompletionHandler:(id /* block */)a1;

@end
