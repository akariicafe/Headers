@class NSString;

@interface MXService : NSObject

@property (readonly) BOOL isStarted;
@property (readonly) long long sourceID;
@property (retain) NSString *currentClient;

- (id)init;
- (BOOL)startService;
- (void).cxx_destruct;
- (BOOL)stopService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (id)getMetricsForClient:(id)a0;
- (BOOL)metricsAvailable;
- (BOOL)metricsSupported;
- (BOOL)diagnosticsAvailable;
- (BOOL)diagnosticsSupported;
- (id)initWithSourceID:(long long)a0;
- (id)pruneSourceData:(id)a0;

@end
