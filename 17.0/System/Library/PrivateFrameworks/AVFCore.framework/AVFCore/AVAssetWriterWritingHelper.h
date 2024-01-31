@class NSString, AVAssetWriterFigAssetWriterNotificationHandler, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    void *_figAssetWriterCallbackContextToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prepareInputsOperationsWithInputs:(id)a0;
+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)a0 andFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a1 andDelegate:(id)a2;

- (BOOL)_isDefunct;
- (void)dealloc;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)a0;
- (void)flush;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)a0;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)a0 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returningDebugDescription:(id *)a2;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)status;
- (id)figTrackReferences;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1;
- (void)finishWriting;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)a0;
- (void)cancelWriting;
- (void)transitionToFailedStatusWithError:(id)a0;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)flushSegment;
- (struct OpaqueFigAssetWriter { } *)_retainedFigAssetWriter;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1 error:(id *)a2;

@end
