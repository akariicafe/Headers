@class NSString, NSXPCConnection;
@protocol CARSetupPromptPresenting;

@interface CARSetupPromptDirector : NSObject <BSInvalidatable>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, weak, nonatomic) id<CARSetupPromptPresenting> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPresenter:(id)a0;
- (void)invalidate;
- (void)_setupConnection;
- (void)_handleConnectionReset;
- (void).cxx_destruct;
- (void)_servicePerform:(id /* block */)a0;
- (void)_synchronous_servicePerform:(id /* block */)a0;
- (void)_presenterIsReady;
- (void)presenterDidDismiss;

@end
