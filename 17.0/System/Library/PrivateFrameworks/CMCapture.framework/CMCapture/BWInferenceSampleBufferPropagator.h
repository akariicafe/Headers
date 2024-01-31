@class NSString, NSArray;

@interface BWInferenceSampleBufferPropagator : NSObject <BWInferencePropagatable> {
    NSArray *_videoRequirements;
    NSArray *_cloneVideoRequirements;
    NSArray *_metadataRequirements;
}

@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (void)dealloc;
- (id)initWithVideoRequirements:(id)a0 cloneRequirements:(id)a1 metadataRequirements:(id)a2;

@end
