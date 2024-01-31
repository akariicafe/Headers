@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXSpinTracerService : MXService

@property (retain) NSMutableArray *spinTracerDataPaths;
@property (retain) NSMutableArray *unarchivedSpinTracerData;
@property (retain) NSObject<OS_os_log> *MXSpinTracerServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedSpinTracerService;

- (id)init;
- (BOOL)startService;
- (void).cxx_destruct;
- (BOOL)stopService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (BOOL)_updateService;
- (BOOL)diagnosticsAvailable;
- (BOOL)diagnosticsSupported;
- (void)unarchiveSpinTracerDataForDateString:(id)a0;

@end
