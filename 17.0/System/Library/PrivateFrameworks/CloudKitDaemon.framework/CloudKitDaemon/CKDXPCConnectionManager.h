@class NSXPCListener, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDXPCConnectionManager : NSObject

@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSMutableArray *tearDownOperations;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sighandlerSource;
@property (retain, nonatomic) NSOperationQueue *clientConnectionQueue;
@property (nonatomic) unsigned long long stateHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *statusReportRequestSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportCallbackQueue;
@property (retain, nonatomic) NSMutableArray *statusReportCallbacks;

+ (void)clouddStarted;
+ (id)sharedConnectionManager;

- (void)_dumpStatusReportArrayToOsTrace:(id)a0;
- (id)CKStatusReportArray;
- (void)_dumpStatusReportToFileHandle:(id)a0;
- (void)dealloc;
- (id)initInternal;
- (void)enumerateConnections:(id /* block */)a0;
- (void)dumpStatusReportToFileHandle:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (void)statusReportWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
