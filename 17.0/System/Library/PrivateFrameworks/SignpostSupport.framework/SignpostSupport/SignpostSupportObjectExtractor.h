@class NSUUID, SignpostSupportObjectFilter, SignpostSupportUniquePIDFilter, SignpostSupportPIDFilter, SignpostSupportExactProcessNameFilter, OSLogEventLiveStream, NSObject, SignpostIntervalBuilder, SignpostSupportSubsystemCategoryFilter, SignpostSupportAnimationGraceTimeController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SignpostSupportObjectExtractor : NSObject

@property (readonly, nonatomic) SignpostIntervalBuilder *intervalBuilder;
@property (nonatomic) unsigned long long processedEventCount;
@property (nonatomic) BOOL buildSkyLightAnimationCompositeIntervalTimelines;
@property (copy, nonatomic) id /* block */ timedOutBeginEventProcessingBlock;
@property BOOL _shouldStopProcessing;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *syncSem;
@property (retain, nonatomic) NSUUID *currentBootUUID;
@property (nonatomic) unsigned long long _notificationTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationProcessingQueue;
@property (retain, nonatomic) OSLogEventLiveStream *_liveStream;
@property (copy, nonatomic) id /* block */ _stopProcessingBlock;
@property (copy, nonatomic) id /* block */ _intervalEndHandler;
@property (nonatomic) BOOL skipAnimationStateTrackingOptimization;
@property (nonatomic) BOOL disableGeneratorProcessing;
@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter;
@property (retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter;
@property (retain, nonatomic) SignpostSupportPIDFilter *pidFilter;
@property (retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter;
@property (retain, nonatomic) SignpostSupportObjectFilter *objectFilter;
@property (nonatomic) BOOL shouldComposeMetadataString;
@property (nonatomic) BOOL includeMetalAnalysis;
@property (copy, nonatomic) id /* block */ beginEventProcessingBlock;
@property (copy, nonatomic) id /* block */ endEventProcessingBlock;
@property (copy, nonatomic) id /* block */ repeatedBeginEventProcessingBlock;
@property (copy, nonatomic) id /* block */ unmatchedEndEventProcessingBlock;
@property (copy, nonatomic) id /* block */ emitEventProcessingBlock;
@property (copy, nonatomic) id /* block */ intervalCompletionProcessingBlock;
@property (copy, nonatomic) id /* block */ animationIntervalCompletionProcessingBlock;
@property (copy, nonatomic) id /* block */ logMessageProcessingBlock;
@property (copy, nonatomic) id /* block */ deviceRebootProcessingBlock;
@property (copy, nonatomic) id /* block */ processingCompletionBlock;
@property (readonly, nonatomic) SignpostSupportAnimationGraceTimeController *animationFirstFrameGraceTimeController;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_eventPassesFilters:(id)a0;
- (BOOL)_eventPassesWithPid:(int)a0 uniquePid:(unsigned long long)a1 processName:(id)a2 subsystem:(id)a3 category:(id)a4;
- (BOOL)_generateIntervalFromEnd:(id)a0 shouldReport:(BOOL)a1;
- (BOOL)_hasNonObjectFilters;
- (BOOL)_hasProcessingBlock;
- (BOOL)_hasSignpostProcessingBlock;
- (BOOL)_isTrackingIntervals;
- (id)_loggingSupportStreamPredicateFromFiltersWithForLiveStreaming:(BOOL)a0;
- (BOOL)_processInternalSignpostEvent:(id)a0 shouldReport:(BOOL)a1;
- (BOOL)_processSignpostEvent:(id)a0 shouldReport:(BOOL)a1;
- (BOOL)_processSignpostSupportLogMessage:(id)a0;
- (void)_processingCompleted:(id)a0;
- (BOOL)_shouldBuildEventWithPid:(int)a0 uniquePid:(unsigned long long)a1 processName:(id)a2 subsystem:(id)a3 category:(id)a4 shouldReport:(BOOL *)a5;
- (BOOL)_shouldProcessEvent:(id)a0 shouldReport:(BOOL *)a1;
- (void)finishProcessingSerializedData;
- (BOOL)processSerializedObjectsFromData:(id)a0 errorOut:(id *)a1;
- (BOOL)processSerializedObjectsFromSignpostFile:(id)a0 errorOut:(id *)a1;
- (void)stopProcessing;

@end
