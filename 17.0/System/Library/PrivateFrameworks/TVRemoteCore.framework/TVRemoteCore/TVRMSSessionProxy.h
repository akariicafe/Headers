@class NSTimer;

@interface TVRMSSessionProxy : NSObject {
    NSTimer *_heartbeatTimer;
    double _sessionTimeout;
    double _lastHeartbeatTime;
    BOOL _isPaused;
}

@property (nonatomic) int sessionIdentifier;

- (void)_applicationDidBecomeActive:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_sendHeartbeat:(id)a0;
- (void)beginHeartbeat;
- (void)endHeartbeat;
- (void)heartbeatDidFail;
- (int)heartbeatTime;
- (BOOL)sessionMatchesNotification:(id)a0;

@end
