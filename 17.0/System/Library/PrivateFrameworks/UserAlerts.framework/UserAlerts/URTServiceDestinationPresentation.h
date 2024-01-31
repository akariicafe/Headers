@class URTAlert, NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue, URTDestinationPresentationDelegate;

@interface URTServiceDestinationPresentation : NSObject <URTAlertServerToClientInterface, URTDestinationPresenting>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteTargetQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic) BSServiceConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) URTAlert *alert;
@property (readonly, nonatomic) long long destination;
@property (readonly, nonatomic) long long preferredPresentationStyle;
@property (weak, nonatomic) id<URTDestinationPresentationDelegate> delegate;

- (void)dismiss;
- (void)present;
- (void)_handleConnectionInterrupted;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleConnectionActivated;
- (oneway void)handleCancelAction;
- (oneway void)handleDefaultAction;
- (oneway void)handleOtherAction;
- (id)initWithAlert:(id)a0 forDestination:(long long)a1 preferredPresentationStyle:(long long)a2;

@end
