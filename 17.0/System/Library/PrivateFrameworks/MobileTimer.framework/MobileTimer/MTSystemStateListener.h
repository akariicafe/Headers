@class NSString;
@protocol MTSystemStateDelegate, MTScheduler;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>

@property (weak, nonatomic) id<MTSystemStateDelegate> delegate;
@property (nonatomic) BOOL restoreDoneHandled;
@property (retain, nonatomic) id<MTScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_restoreNotification;
+ (BOOL)isSystemRestoreDone;

- (void)printDiagnostics;
- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(BOOL)a1;
- (void)_handleRestoreDone;
- (id)gatherDiagnostics;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (id)liveDarwinNotifications;
- (BOOL)checkSystemReady;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_verifyRestoreDone;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (BOOL)_checkIfRestoreDone;
- (void)_handleF5Reset;

@end
