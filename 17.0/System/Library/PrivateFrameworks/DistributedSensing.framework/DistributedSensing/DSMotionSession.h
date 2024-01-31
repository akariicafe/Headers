@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DSMotionSession : NSObject {
    BOOL _shouldActivate;
    id /* block */ _activateCompletionHandler;
    BOOL _shouldInvalidate;
    BOOL _invalidateFinished;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) unsigned char vehicleState;
@property (nonatomic) unsigned char vehicleConfidence;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_activate;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_handleXPCMessage:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)_updateVehicleState:(unsigned char)a0 confidence:(unsigned char)a1;
- (void)_activateXPC;
- (void)_activateXPCHandleReply:(id)a0;
- (void)_deviceChangedMessage:(id)a0;
- (void)_deviceFoundMessage:(id)a0;
- (void)_deviceLostMessage:(id)a0;
- (id)_getXPCConnection;
- (void)_invalidateXPC;
- (void)_printCohort;
- (void)_xpcEventHandler:(id)a0;
- (void)_xpcHandleCompletionBlockReply:(id)a0 error:(id *)a1;
- (void)encodeSelf:(id)a0;
- (void)printCohort;
- (void)updateVehicleState:(unsigned char)a0 confidence:(unsigned char)a1;

@end
