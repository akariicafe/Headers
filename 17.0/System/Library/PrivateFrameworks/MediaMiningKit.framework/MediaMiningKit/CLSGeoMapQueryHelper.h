@class CLSGeoServiceThread, NSObject;
@protocol OS_dispatch_source, CLSQueryProtocol, OS_dispatch_queue;

@interface CLSGeoMapQueryHelper : NSObject

@property (readonly, nonatomic) id<CLSQueryProtocol> query;
@property (readonly, copy, nonatomic) id /* block */ cancellerBlock;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double internalProgressTimeInterval;
@property (nonatomic) unsigned long long retryLevel;
@property (nonatomic) double nextRetryTime;
@property (nonatomic) BOOL alreadyLaunched;
@property (nonatomic) BOOL didFinishQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) CLSGeoServiceThread *geoServiceThread;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double numberOfRetries;
@property (nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout;

- (void)_cancel;
- (void)dealloc;
- (void)_handleError:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_heartBeat;
- (void)_forwardToGeoThread;
- (void)_handleQueryResultsForQuery:(id)a0 error:(id)a1;
- (void)_startQuery;
- (id)initWithQueryObject:(id)a0;
- (void)launchQueryWithCancellerBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;

@end
