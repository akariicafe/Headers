@class PLAgent;

@interface PLTelephonyConnection : NSObject {
    struct __CTServerConnection { } *connection;
    struct __CFMachPort { } *ctServerPort;
    struct __CFRunLoopSource { } *ctServerSource;
}

@property (readonly, nonatomic) struct __CTServerConnection { } *connection;
@property (retain) PLAgent *observerAgent;

+ (id)sharedTelephonyConnection;

- (id)init;
- (id)currentCallStatus;
- (id)getProperty:(id)a0 forTrace:(id)a1;
- (BOOL)requestBasebandCoreDump:(id)a0;
- (id)getRemotePortNameWithLocalName:(id)a0;
- (void)teardownConnection;
- (void)invalidate;
- (void)getRAT:(id *)a0 preferredRAT:(id *)a1 campedRAT:(id *)a2;
- (void)getSignalStrength:(long long *)a0 asPercentage:(long long *)a1 withBars:(long long *)a2;
- (void)deregisterForAllTelephonyNotifications;
- (void)registerCallback:(void /* function */ *)a0 forTelephonyNotification:(struct __CFString { } *)a1;
- (void)enableDiagLogging;
- (void).cxx_destruct;
- (id)humanReadableRATName:(struct __CFString { } *)a0;
- (BOOL)requestBasebandStateDump:(id)a0;
- (id)humanReadableCallStatus:(int)a0;
- (id)activeBand;

@end
