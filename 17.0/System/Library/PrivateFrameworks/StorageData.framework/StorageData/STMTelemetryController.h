@class NSXPCConnection;

@interface STMTelemetryController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)stopService;
- (void)getTelemetry:(id /* block */)a0;
- (void)retrieveTelemetryWithCompletionHandler:(id /* block */)a0;

@end
