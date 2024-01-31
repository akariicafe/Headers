@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXHangTracerService : MXService

@property (retain) NSMutableArray *hangTracerDataPaths;
@property (retain) NSMutableArray *unarchivedHangTracerData;
@property (retain) NSObject<OS_os_log> *MXHangTracerServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedHangTracerService;

- (id)init;
- (BOOL)startService;
- (void).cxx_destruct;
- (BOOL)stopService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (BOOL)_updateService;
- (BOOL)diagnosticsAvailable;
- (BOOL)diagnosticsSupported;
- (void)unarchiveHangTracerDataForDateString:(id)a0;

@end
