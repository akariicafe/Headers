@class BWMemoryPool, NSDictionary, NSObject, FigCaptureDeferredTransactionBroker, FigCaptureDeferredProcessingJob, NSString, NSSet, BWMemoryPoolFlushAssertion, BWDeferredProcessingContainer, BWDeferredPipelineParameters, BWDeferredProcessingSourceNode, BWStillImageSettings, BWGraph;
@protocol OS_dispatch_queue;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_currentPortType;
    BWDeferredPipelineParameters *_currentPipelineParameters;
    BOOL _currentDemosaicedRawEnabled;
    BWStillImageSettings *_currentSettings;
    BWGraph *_graph;
    BOOL _graphRunning;
    BWDeferredProcessingSourceNode *_sourceNode;
    FigCaptureDeferredProcessingJob *_job;
    BWDeferredProcessingContainer *_prewarmedContainer;
    NSSet *_allSensorIDStrings;
    NSDictionary *_defaultSensorIDsByPortType;
    BWMemoryPool *_memoryPool;
    BWMemoryPoolFlushAssertion *_flushAssertion;
}

@property (readonly, nonatomic) FigCaptureDeferredProcessingJob *currentJob;
@property (readonly, nonatomic) BWDeferredProcessingContainer *currentContainer;
@property (readonly, nonatomic) FigCaptureDeferredTransactionBroker *broker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedProcessingEngine;

- (void)releaseResources;
- (id)init;
- (void)dealloc;
- (void)graph:(id)a0 didFinishStartingWithError:(int)a1;
- (void)graphDidPrepareNodes:(id)a0;
- (void)ensureGraphForSettings:(id)a0 processingSettings:(id)a1 applicationID:(id)a2;
- (void)executeJob:(id)a0;

@end
