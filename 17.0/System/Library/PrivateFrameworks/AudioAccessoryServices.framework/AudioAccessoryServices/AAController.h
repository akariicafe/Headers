@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AAController : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic) unsigned int coreBluetoothInternalFlag;
@property (copy, nonatomic) id /* block */ conversationDetectMessageHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void)_activate;
- (id)_ensureXPCStarted;
- (void)_xpcReceivedMessage:(id)a0;
- (void)_invalidated;
- (void)xpcReceivedMessage:(id)a0;
- (void)_activateXPCCompleted:(id)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)_activateXPC:(BOOL)a0;
- (void)_conversationDetectMessageReceived:(id)a0 fromDevice:(id)a1;
- (void)_xpcReceivedAccessoryEvent:(id)a0;
- (void)sendConversationDetectMessage:(id)a0 destinationIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
