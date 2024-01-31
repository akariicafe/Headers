@class TAAnalyticsManager, NSString, TATrackingAvoidanceService, OSLogPersistence, OSActivityStream, NSObject, NSURL;
@protocol OS_dispatch_semaphore;

@interface TAReplay : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate, OSDeviceDelegate> {
    TATrackingAvoidanceService *_service;
    OSLogPersistence *_persistence;
    OSActivityStream *_stream;
    NSObject<OS_dispatch_semaphore> *_persistenceWait;
    NSObject<OS_dispatch_semaphore> *_streamWait;
    NSURL *_outputPath;
    NSURL *_inputPersistencePath;
    TAAnalyticsManager *_analyticsManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)streamDidStart:(id)a0;
- (void)streamDidStop:(id)a0;
- (BOOL)activityStream:(id)a0 deviceUDID:(id)a1 deviceID:(id)a2 status:(long long)a3 error:(id)a4;
- (BOOL)activityStream:(id)a0 results:(id)a1;
- (BOOL)persistence:(id)a0 results:(id)a1 error:(id)a2;
- (void)persistenceDidFinishReadingForStartDate:(id)a0 endDate:(id)a1;
- (void)streamDidFail:(id)a0 error:(id)a1;
- (void)replaySingleEventLogString:(id)a0;
- (void)replayWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithLogArchive:(id)a0 outputPath:(id)a1 inputPersistencePath:(id)a2 settings:(id)a3;

@end
