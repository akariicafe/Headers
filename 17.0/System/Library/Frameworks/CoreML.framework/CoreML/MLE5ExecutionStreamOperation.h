@class IOSurfaceSharedEventListener, NSString, NSArray, MLE5ProgramLibrary, NSError, MLPixelBufferPool, MLModelDescription, NSMutableArray, MLModelConfiguration;
@protocol MLFeatureProvider;

@interface MLE5ExecutionStreamOperation : NSObject {
    struct unique_ptr<e5rt_async_event, MLE5ObjectDeleter<e5rt_async_event>> { struct __compressed_pair<e5rt_async_event *, MLE5ObjectDeleter<e5rt_async_event>> { struct e5rt_async_event *__value_; } __ptr_; } _cachedWaitEvent;
}

@property (readonly, nonatomic) MLE5ProgramLibrary *programLibrary;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration;
@property (nonatomic) struct e5rt_execution_stream_operation { } *operationHandle;
@property (copy, nonatomic) NSArray *inputPorts;
@property (copy, nonatomic) NSArray *outputPorts;
@property (nonatomic) long long state;
@property (readonly, nonatomic) IOSurfaceSharedEventListener *waitEventListener;
@property (readonly, nonatomic) unsigned long long modelSignpostId;
@property (readonly, nonatomic) NSMutableArray *inputPortsRequiringCopy;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (retain, nonatomic) id<MLFeatureProvider> inputFeatures;
@property (readonly, nonatomic) id<MLFeatureProvider> outputFeatures;
@property (readonly, copy, nonatomic) NSString *debugLabel;
@property (retain, nonatomic) NSError *asyncSubmissionError;
@property (readonly, copy) NSString *functionName;
@property (copy) NSString *shapeHash;

- (void)reset;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_inputPortNames;
- (struct e5rt_execution_stream_operation { } *)_createOperationAndReturnError:(id *)a0;
- (void)_bindCompletionSyncPointDirectlyIfPossile:(id)a0;
- (BOOL)_bindInputFeaturesAndWaitEvents:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)_bindInputPortsWithFeatures:(id)a0 error:(id *)a1;
- (BOOL)_bindOutputPortsWithOptions:(id)a0 error:(id *)a1;
- (void)_bindWaitEventsDirectly:(id)a0;
- (void)_bindWaitEventsWithCopies:(id)a0;
- (struct e5rt_execution_stream_operation { } *)_createOperationWithRetryCount:(long long)a0 error:(id *)a1;
- (id)_newArrayOfUnboundedInputPortsForPortNames:(id)a0 featureDescriptionsByName:(id)a1 error:(id *)a2;
- (id)_newArrayOfUnboundedOutputPortsForPortNames:(id)a0 featureDescriptionsByName:(id)a1 error:(id *)a2;
- (id)_outputPortNames;
- (BOOL)_runInputPortCopiesAndReturnError:(id *)a0;
- (id)initWithProgramLibrary:(id)a0 functionName:(id)a1 modelDescription:(id)a2 configuration:(id)a3 debugLabel:(id)a4 modelSignpostId:(unsigned long long)a5;
- (BOOL)preloadAndReturnError:(id *)a0;
- (BOOL)prepareForAsyncSubmission:(id)a0 error:(id *)a1;
- (BOOL)prepareWithOptions:(id)a0 error:(id *)a1;

@end
