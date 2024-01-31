@class NSString;
@protocol SFAirDropClassroomTransferDelegate;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol>

@property (weak, nonatomic) id<SFAirDropClassroomTransferDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)updateTransferWithIdentifier:(id)a0 withState:(long long)a1 information:(id)a2 completionHandler:(id /* block */)a3;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)transferWithIdentifierWasAccepted:(id)a0;
- (id)machServiceName;
- (void)transferWithIdentifierWasDeclined:(id)a0 withFailureReason:(unsigned long long)a1;

@end
