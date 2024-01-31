@class NSObject, NSMutableArray, BMAccessClient, BMComputeSourceClient, BMStreamDatastoreWriter;
@protocol OS_os_transaction;

@interface BMStoreSource : BMSource {
    BMStreamDatastoreWriter *_writer;
    BMAccessClient *_accessClient;
    BOOL _shouldSendMetrics;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_transaction> *_transaction;
    NSMutableArray *_pendingWrites;
    void *_lockStateRegistration;
}

@property (readonly, nonatomic) BMComputeSourceClient *computeSource;

- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (void)dealloc;
- (BOOL)_writeEvent:(id)a0 timestamp:(double)a1 signpostID:(unsigned long long)a2 notifyCompute:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1 accessClient:(id)a2 eventDataClass:(Class)a3;
- (void)sendEvent:(id)a0;
- (void)_processPendingWrites;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1 accessClient:(id)a2;

@end
