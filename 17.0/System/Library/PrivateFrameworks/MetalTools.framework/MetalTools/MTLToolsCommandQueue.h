@class NSString, MTLToolsPerfCounterMailbox, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {
    MTLToolsPerfCounterMailbox *_perfSampleMailbox;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _perfHandlerLock;
    id /* block */ _perfSampleHandlerBlock;
}

@property int backgroundTrackingPID;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property BOOL skipRender;
@property BOOL executionEnabled;
@property (readonly) BOOL isOpenGLQueue;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCompletionQueue:(id)a0;
- (unsigned long long)getBackgroundGPUPriority;
- (void)dealloc;
- (void)finish;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (unsigned long long)getGPUPriority;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (int)requestCounters:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (id)commandBufferWithDescriptor:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)setSubmissionQueue:(id)a0;
- (void)addPerfSampleHandler:(id /* block */)a0;
- (void)insertDebugCaptureBoundary;
- (id)availableCounters;
- (void)dispatchAvailableCompletionNotifications;
- (int)requestCounters:(id)a0 withIndex:(unsigned long long)a1;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)counterInfo;
- (id)getRequestedCounters;
- (id)getSPIStats;
- (id)subdivideCounterList:(id)a0;
- (id /* block */)snapshotPerfSampleHandlerAndStatEnabled:(BOOL *)a0 forCommandBuffer:(id)a1;

@end
