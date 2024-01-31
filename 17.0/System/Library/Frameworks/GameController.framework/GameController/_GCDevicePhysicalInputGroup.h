@class NSString, NSDictionary, NSObject, _GCDevicePhysicalInputBase;
@protocol OS_dispatch_queue, _GCDevicePhysicalInputGroupDataSource;

@interface _GCDevicePhysicalInputGroup : NSObject <_GCDevicePhysicalInputDataSource> {
    NSDictionary *_physicalInputs;
    _GCDevicePhysicalInputBase *_defaultPhysicalInput;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isSnapshot;
    BOOL _hasQueueOverride;
    id<_GCDevicePhysicalInputGroupDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhysicalInputs:(id)a0;
- (void)physicalInput:(id)a0 setQueue:(id)a1;
- (void)physicalInputPoll:(id)a0 forLatest:(BOOL)a1;
- (id)physicalInputQueue:(id)a0;
- (void)physicalInputTransactionQueueDepthDidChange:(id)a0;
- (id)physicalInputWithAttributes:(id)a0;

@end
