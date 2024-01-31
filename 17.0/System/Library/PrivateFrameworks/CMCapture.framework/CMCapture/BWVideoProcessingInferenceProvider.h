@class NSSet, NSString, NSMutableArray, VCPCaptureAnalysisSession;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWVideoProcessingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferenceExecutable, BWInferencePropagatable> {
    unsigned long long _analysisType;
    VCPCaptureAnalysisSession *_vcpSession;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSMutableArray *inputVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *outputVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSMutableArray *outputMetadataRequirements;
@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;

+ (void)initialize;

- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (id)newStorage;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (id)bindOutputMetadataKeys:(id)a0;
- (id)bindVideoInputFromAttachedMediaUsingKey:(id)a0 preparedByAttachedMediaKey:(id)a1 withVideoFormatProvider:(id /* block */)a2;
- (id)initWithType:(int)a0 analysisType:(unsigned long long)a1 executionTarget:(int)a2 schedulerPriority:(unsigned int)a3 preventionReasons:(id)a4 resourceProvider:(id)a5;

@end
