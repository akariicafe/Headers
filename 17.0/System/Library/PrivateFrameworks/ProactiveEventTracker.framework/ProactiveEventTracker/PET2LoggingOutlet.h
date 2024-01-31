@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PET2LoggingOutlet : NSObject <PETLoggingOutlet> {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSDictionary *_pet1HistogramBuckets;
    NSMutableDictionary *_addKeys;
    NSMutableDictionary *_updateKeys;
    NSObject<OS_os_transaction> *_batchTxn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logUnsignedIntegerValue:(unsigned long long)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (id)init;
- (void)logDoubleValue:(double)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (void)setUnsignedIntegerValue:(unsigned long long)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (void)_dispatchBatchForKey:(id)a0 value:(unsigned long long)a1 isUpdate:(BOOL)a2;
- (void).cxx_destruct;
- (void)logErrorForEvent:(id)a0 featureId:(id)a1 reason:(id)a2;
- (id)_findBucketsForKey:(id)a0;

@end
