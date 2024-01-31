@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DDScanServerDispatcher : NSObject {
    NSObject<OS_dispatch_queue> *_scannerQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    BOOL _memoryWarningInProgress;
    NSMutableDictionary *_scanners;
    BOOL _tearDownRequested;
    unsigned long long _jobIdentifier;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
