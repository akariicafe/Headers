@class NSString, IMDispatchTimer;

@interface IMNetworkAvailability : NSObject {
    NSString *_guid;
    IMDispatchTimer *_timer;
    double _timeout;
    double _wifiTimeout;
    double _startTime;
    unsigned long long _flags;
    unsigned long long _options;
    id /* block */ _completionBlock;
}

@property (nonatomic) void *context;

- (void)_cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_isNetworkAvailablibityCheckingDone:(BOOL)a0 wantsWiFi:(BOOL)a1 wantsCellular:(BOOL)a2 cellular:(BOOL)a3 hasCellularDataConnection:(BOOL)a4 done:(BOOL)a5 withinTimeWindow:(BOOL)a6;
- (void)_setTimer;
- (void)_timerHit:(id)a0;
- (id)initWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 timeout:(double)a2 wifiTimeout:(double)a3 completionBlock:(id /* block */)a4;
- (id)initWithFlags:(unsigned long long)a0 timeout:(double)a1 wifiTimeout:(double)a2 completionBlock:(id /* block */)a3;
- (id)mobileNetworkManager;

@end
