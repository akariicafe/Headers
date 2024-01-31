@class CPSAuthenticationRequest, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CPSAuthenticationSession : NSObject <CPSAuthenticationServiceClientInterface> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_serviceConnection;
    BOOL _activateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) id /* block */ deviceAcceptedNotificationHandler;
@property (copy, nonatomic) id /* block */ deviceStartedAuthenticationHandler;
@property (readonly, nonatomic) CPSAuthenticationRequest *request;
@property (copy, nonatomic) id /* block */ sessionCompletionHandler;
@property (copy, nonatomic) id /* block */ sessionFinishedHandler;
@property (copy, nonatomic) id /* block */ sessionFailedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)authenticationSessionDeviceStartedAuthentication:(id)a0;
- (void)authenticationSessionDeviceTappedNotification:(id)a0;
- (void)authenticationSessionDidFailWithError:(id)a0;
- (void)authenticationSessionDidFinishWithResponse:(id)a0;

@end
