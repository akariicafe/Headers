@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface BWInferenceScheduler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    NSMapTable *_connectionsByIdentifier;
    NSObject<OS_dispatch_workloop> *_inferenceWorkloop;
    NSObject<OS_dispatch_workloop> *_scalingWorkloop;
    NSObject<OS_dispatch_workloop> *_submissionWorkloop;
    NSObject<OS_dispatch_workloop> *_completionWorkloop;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metalSubmissionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metalCompletionQueue;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (int)prepareForInferenceRequirements:(id)a0 dependencyProviderSource:(id)a1 formatProvider:(id)a2 pixelBufferPoolProvider:(id)a3 connection:(unsigned long long)a4 backPressureDrivenPipelining:(BOOL)a5;
- (void)unregisterInferenceConnection:(unsigned long long)a0;
- (unsigned long long)registerInferenceConnection;
- (int)performInferencesForConnection:(unsigned long long)a0 usingInputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 skippingInferencesWithTypes:(id)a3;

@end
