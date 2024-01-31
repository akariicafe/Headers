@class NSUUID, NSString, LNActionExecutorPassthroughDelegate, LNActionExecutorOptions, LNAction, LNConnection, NSProgress, LNActionMetadata, NSObject;
@protocol LNActionExecutorDelegate, OS_os_activity;

@interface LNActionExecutor : NSObject <LNConnectionClientInterface, NSXPCProxyCreating, NSProgressReporting>

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) LNActionExecutorPassthroughDelegate *showOutputActionPassthroughDelegate;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressSubscriptionLock;
@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) NSProgress *executionProgress;
@property (copy, nonatomic) LNActionMetadata *_showOutputActionMetadata;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) LNConnection *connection;
@property (readonly, copy, nonatomic) LNActionExecutorOptions *options;
@property (readonly, copy, nonatomic) LNAction *action;
@property (weak, nonatomic) id<LNActionExecutorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)perform;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setState:(long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_logTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)donateIfNecessaryWithResult:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAction:(id)a0 connection:(id)a1 options:(id)a2;
- (void)requestActionConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestContinueInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestViewSnippetEnvironmentWithCompletion:(id /* block */)a0;
- (void)requestViewSnippetSizeWithCompletion:(id /* block */)a0;
- (void)runShowOutputActionIfNecessary:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCompletedWithError:(id)a0;
- (void)unsubscribeProgressObservation;

@end
