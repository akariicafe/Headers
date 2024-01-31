@class NSDate, CKOperationGroup, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate *_dateRetryWasFirstRequested;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) CKOperationGroup *operationGroup;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long numberOfRetries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleQueue;

- (id)init;
- (id)_logStringForOperationGroup;
- (BOOL)_shouldRetryOperationWithError:(id)a0 isItemPartialError:(BOOL)a1 getRetryInterval:(double *)a2 underlyingError:(id *)a3;
- (void).cxx_destruct;
- (id)initWithLog:(id)a0;
- (long long)scheduleRetryIfNeededForError:(id)a0 usingBlock:(id /* block */)a1;

@end
