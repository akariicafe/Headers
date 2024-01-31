@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSXExpositorClient : TSXClient <TSXExpositorClientProtocol> {
    NSObject<OS_dispatch_queue> *_clockManagerNotifications;
    NSMutableArray *_clockManagerMatchNotificationsArray;
    NSMutableArray *_clockManagerTerminateNotificationsArray;
    BOOL _clockManagerAvailable;
    NSObject<OS_dispatch_queue> *_ptpManagerNotifications;
    NSMutableArray *_ptpManagerMatchNotificationsArray;
    NSMutableArray *_ptpManagerTerminateNotificationsArray;
    BOOL _ptpManagerAvailable;
    BOOL _inited;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverProtocol;
+ (id)serviceName;
+ (id)clientProtocol;
+ (id)sharedExpositorClient;

- (id)kernelClockAvailableKernelClockIdentifiers;
- (id)init;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0 daemonClassName:(id *)a1;
- (void)interruptedConnection;
- (void)gPTPManagerNotifyWhengPTPManagerIsAvailable:(id /* block */)a0;
- (id)gPTPPortDiagnosticInfoForPortWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
- (id)exportedObject;
- (void)clockManagerNotifyWhenClockManagerIsAvailable:(id /* block */)a0;
- (void)gPTPManagerIsAvailable;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0;
- (void)clockManagerIsUnavailable;
- (void).cxx_destruct;
- (void)clockManagerIsAvailable;
- (void)gPTPManagerIsUnavailable;
- (void)gPTPManagerNotifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
- (id)gPTPManagerDiagnosticInfo;
- (void)clockManagerNotifyWhenClockManagerIsUnavailable:(id /* block */)a0;
- (id)clockManagerDiagnosticInfo;
- (id)clockManagerDaemonClassNameForClockIdentifier:(unsigned long long)a0;
- (void)invalidatedConnection;
- (id)clockNameForClockIdentifier:(unsigned long long)a0;

@end
