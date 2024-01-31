@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_semaphore;

@interface PowerUIBDCDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } bdcDataLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bdcCallbackSemaphore;
@property (retain, nonatomic) NSMutableArray *dataQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)bdcSemaphoreToUse;
- (id)getBDCDataDictTemplate;
- (id)getNextBDCDataDict;
- (BOOL)promptBDCToQueryState:(id)a0;

@end
