@class NPTunnel, NSPAppRule, NPFlowProperties, NSObject, NSDate;
@protocol OS_dispatch_data;

@interface NPTunnelFlow : NSObject {
    BOOL _hasTunnel;
    int _tunnelError;
    long long _fallbackReason;
}

@property (retain, nonatomic) NSObject<OS_dispatch_data> *savedData;
@property (nonatomic) void *fallbackTimer;
@property (nonatomic) void *telemetryTimer;
@property (nonatomic) double fallbackDelay;
@property (readonly, nonatomic) unsigned long long hashKey;
@property (nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NPTunnel *tunnel;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSPAppRule *appRule;
@property (readonly, nonatomic) NPFlowProperties *extraFlowProperties;
@property (nonatomic) long long fallbackReason;
@property (retain, nonatomic) NSDate *firstTxByteTimestamp;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) void *window;
@property (nonatomic) unsigned long long initialBytesLeftOver;
@property (nonatomic) BOOL isDirectConnectionViable;
@property (nonatomic) BOOL fallbackDisabled;
@property (readonly, nonatomic) BOOL enableDirectRace;
@property (readonly, nonatomic) BOOL isClientFlowClosed;
@property (readonly, nonatomic) BOOL isBestEffort;
@property (nonatomic) BOOL disconnectedByApp;
@property (nonatomic) BOOL shouldComposeIntialData;

- (void)dealloc;
- (void)closeWithError:(int)a0;
- (void).cxx_destruct;
- (void)closeFromTunnel;
- (id)appData;
- (void)cleanupLosingConnection:(BOOL)a0;
- (void)closeClientFlowWithError:(int)a0;
- (void)closeFromDirectConnectionWithError:(int)a0;
- (id)combineStateInfo:(id)a0 andConnectionInfo:(id)a1;
- (id)copyConnectionInfo;
- (id)createFallbackConnectionInfoWithFallbackReason:(long long)a0;
- (void)createTelemetryDataWithCompletionHandler:(id /* block */)a0;
- (void)handleAppData:(id)a0;
- (void)handleTunnelCanHandleMoreData;
- (void)handleTunnelConnected;
- (void)handleTunnelDisconnected;
- (void)handleTunnelReadyForData;
- (void)increaseWindowSize:(unsigned long long)a0;
- (id)initWithTunnel:(id)a0 appRule:(id)a1 hashKey:(unsigned long long)a2 extraFlowProperties:(id)a3;
- (void)processConnectionInfo:(id)a0;
- (void)readDataFromClient;
- (void)reportMetrics;
- (void)reportTelemetry:(id)a0 withService:(id)a1 url:(id)a2;
- (void)sendDataToClient:(id)a0 fromTunnel:(BOOL)a1;
- (void)setAppData:(id)a0;
- (BOOL)shouldSendDataToClient:(id)a0 fromTunnel:(BOOL)a1;
- (void)startDirectConnection;
- (void)stopDirectConnection;

@end
