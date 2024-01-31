@class BWMemoryPoolFlushAssertion, NSString, NSArray, BWMemoryAnalyticsPayload, NSMutableDictionary, NSObject, NSMutableArray, BWMemoryPool;
@protocol OS_dispatch_group, BWGraphStatusDelegate, OS_dispatch_queue;

@interface BWGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    NSMutableDictionary *_outputsWithSharedPoolsForAttachedMedia;
    NSMutableArray *_nodesToPrepareConcurrently;
    NSArray *_nodesToPrepareAfterGraphStart;
    NSMutableArray *_deferredPreparePrioritySinks;
    BOOL _deferredNodePrepareCancelled;
    NSMutableArray *_deferredStartSourceNodes;
    BOOL _haveStartedOrCancelledDeferredSourceNodes;
    BOOL _running;
    BOOL _beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_sourceNodesStartGroup;
    NSObject<OS_dispatch_group> *_nonDeferredSourceNodesStartGroup;
    NSObject<OS_dispatch_queue> *_sourceStartQueue;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    BOOL _supportsLiveReconfiguration;
    BOOL _classicRetainedBufferCount;
    NSString *_applicationID;
    int _clientPID;
    NSString *_modeDescription;
    NSString *_sourceDescription;
    int _graphStateTransitionTimeoutSeconds;
    unsigned int _configurationQueuePriority;
    BWMemoryPoolFlushAssertion *_flushAssertion;
}

@property int errorStatus;
@property (readonly, nonatomic) BOOL deferredNodePrepareEnabled;
@property (nonatomic) BOOL resumesConnectionsAsNodesArePrepared;
@property (readonly, nonatomic) BOOL supportsLiveReconfiguration;
@property (nonatomic) id<BWGraphStatusDelegate> statusDelegate;
@property (retain, nonatomic) BWMemoryPool *memoryPool;
@property (readonly, nonatomic, getter=isRunningForContinuityCapture) BOOL runningForContinuityCapture;
@property (nonatomic) BOOL memoryAnalyticsReportingEnabled;
@property (readonly, nonatomic) BWMemoryAnalyticsPayload *memoryAnalyticsPayload;

+ (void)initialize;

- (int)clientPID;
- (BOOL)stop:(id *)a0;
- (void)beginConfiguration;
- (id)init;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)a0;
- (void)dealloc;
- (void)cancelDeferredNodePrepare;
- (void)setClientPID:(int)a0;
- (void)setModeDescription:(id)a0;
- (BOOL)start:(id *)a0;
- (void)waitForNonDeferredSourceNodesToStart;
- (id)dotString;
- (void)enableDeferredStartForSourceNode:(id)a0;
- (id)applicationID;
- (id)_breadthFirstEnumerator;
- (void)cancelDeferredSourceNodeStart;
- (BOOL)commitConfigurationWithID:(long long)a0 error:(id *)a1;
- (BOOL)addNode:(id)a0 error:(id *)a1;
- (void)setSourceDescription:(id)a0;
- (id)modeDescription;
- (void)startDeferredNodePrepareIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)enableConcurrentPrepareForNode:(id)a0;
- (BOOL)_resolveFormats:(id *)a0;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)a0;
- (BOOL)connectOutput:(id)a0 toInput:(id)a1 pipelineStage:(id)a2;
- (void)waitForStartOrCommitToComplete;
- (id)initWithConfigurationQueuePriority:(unsigned int)a0;
- (void)startDeferredSourceNodesIfNeeded;
- (void)setApplicationID:(id)a0;
- (id)_reverseBreadthFirstEnumerator;
- (id)_sinkNodes;
- (void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)a0;
- (id)sourceDescription;
- (id)_sourceNodes;
- (void)notifyWhenNonDeferredSourceNodesHaveStarted:(id /* block */)a0;

@end
