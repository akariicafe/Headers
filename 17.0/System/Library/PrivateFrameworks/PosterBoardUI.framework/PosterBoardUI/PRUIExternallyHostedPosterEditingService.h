@class NSString, BSServiceConnection;
@protocol BSServiceConnectionClient, PRUIExternallyHostedPosterEditingServiceDelegate;

@interface PRUIExternallyHostedPosterEditingService : NSObject <PRUIExternallyHostedPosterEditingServerToClientInterface> {
    BSServiceConnection<BSServiceConnectionClient> *_serviceConnection;
}

@property (class, readonly, nonatomic) BOOL isExternalEditingSupported;

@property (weak, nonatomic) id<PRUIExternallyHostedPosterEditingServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editingRequestForEntryPoint:(id)a0;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_serviceInterfaceWithError:(id *)a0;
- (void).cxx_destruct;
- (oneway void)beginEditingWithRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)didEndEditingWithResponse:(id)a0;
- (oneway void)sendRequestDismissalActionWithRequest:(id)a0;
- (oneway void)willEndEditingWithResponse:(id)a0;

@end
