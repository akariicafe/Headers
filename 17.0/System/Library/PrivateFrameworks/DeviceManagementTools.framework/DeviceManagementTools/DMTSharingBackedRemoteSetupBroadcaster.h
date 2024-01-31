@class NSString, CATSharingBroadcastTerminal, CATOperationQueue;

@interface DMTSharingBackedRemoteSetupBroadcaster : NSObject <CATSharingBroadcastTerminalDelegate, DMTRemoteSetupBroadcasting>

@property (readonly, nonatomic) CATSharingBroadcastTerminal *terminal;
@property (readonly, nonatomic) CATOperationQueue *delegateQueue;
@property (retain, nonatomic) NSString *displayedPin;
@property (nonatomic) BOOL isBroadcasting;
@property (nonatomic) BOOL isInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ showPinHandler;
@property (copy, nonatomic) id /* block */ showErrorHandler;
@property (copy, nonatomic) id /* block */ pairedTransportHandler;

- (void)invalidateWithError:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)broadcastTerminal:(id)a0 didActivateWithError:(id)a1;
- (void)broadcastTerminal:(id)a0 hasPairedDeviceConnection:(id)a1;
- (void)broadcastTerminal:(id)a0 needsToDisplayPin:(id)a1;
- (void)broadcastTerminal:(id)a0 stoppedWithError:(id)a1;
- (void)broadcastTerminalNeedsToDismissPin:(id)a0;
- (void)beginObservingTerminal;
- (void)broadcastTerminal:(id)a0 hasError:(id)a1;
- (void)endObservingTerminal;
- (id)initWithPrimitives:(id)a0;
- (void)startBroadcasting;

@end
