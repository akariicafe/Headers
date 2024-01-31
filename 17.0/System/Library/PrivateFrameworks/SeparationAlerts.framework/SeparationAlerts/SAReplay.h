@class NSString, NSURL, SAAnalytics, OSLogPersistence, NSMutableDictionary, NSObject, OSActivityStream, NSMutableArray, SAService;
@protocol OS_dispatch_semaphore;

@interface SAReplay : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate, OSDeviceDelegate> {
    SAService *_service;
    OSLogPersistence *_persistence;
    OSActivityStream *_stream;
    NSObject<OS_dispatch_semaphore> *_persistenceWait;
    NSObject<OS_dispatch_semaphore> *_streamWait;
    NSURL *_outputPath;
    NSURL *_inputPersistencePath;
    SAAnalytics *_analytics;
}

@property (retain, nonatomic) NSMutableDictionary *eventMessages;
@property (retain, nonatomic) NSMutableArray *eventOrder;
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
- (id)initWithLogArchive:(id)a0 outputPath:(id)a1 inputPersistencePath:(id)a2;
- (void)replaySingleEventLogString:(id)a0;
- (void)replayWithStartDate:(id)a0 endDate:(id)a1;

@end
