@class WFSetupServerInternal, _TtC10TDGSharing33WFSetupServerAnisetteDataProvider, NSObject;
@protocol OS_dispatch_queue;

@interface WFSetupServer : NSObject

@property (readonly) WFSetupServerInternal *underlyingSwiftObject;
@property (copy, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ receivedObjectHandler;
@property (copy, nonatomic) id /* block */ setupPromptPinHandler;
@property (copy, nonatomic) id /* block */ setupProgressEventHandler;
@property (copy, nonatomic) id /* block */ userInteractionProgressEventHandler;
@property (readonly, nonatomic) _TtC10TDGSharing33WFSetupServerAnisetteDataProvider *anisetteDataProvider;

- (id)init;
- (void)tryPIN:(id)a0;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)sendSetupAction:(unsigned int)a0 info:(id)a1 responseHandler:(id /* block */)a2;
- (void)sendObject:(id)a0 withEncryption:(BOOL)a1;
- (void)sendUserInteractionEvent:(id)a0 withEncryption:(BOOL)a1 responseHandler:(id /* block */)a2;
- (void)startSecureChannelWithResetFlag:(BOOL)a0 completion:(id /* block */)a1;
- (void)startSecureChannelWithResetFlag:(BOOL)a0 context:(id)a1 completion:(id /* block */)a2;

@end
