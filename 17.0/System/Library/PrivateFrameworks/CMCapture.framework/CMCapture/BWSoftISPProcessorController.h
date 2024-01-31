@class NSString, SoftISPProcessor, NSDictionary, SoftISPPrepareDescriptor, NSMutableDictionary;

@interface BWSoftISPProcessorController : BWStillImageProcessorController <BWSoftISPProcessorControllerInputUpdatesDelegate, SoftISPProcessorDelegate> {
    SoftISPProcessor *_processor;
    SoftISPPrepareDescriptor *_prepareDescriptor;
    NSDictionary *_sensorIDByPortType;
    struct opaqueCMFormatDescription { } *_inputFormatDescription;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct opaqueCMFormatDescription { } *_lscFormatDescription;
    struct opaqueCMFormatDescription { } *_flashLSCFormatDescription;
    NSMutableDictionary *_digitalFlashAWBMetadata;
    NSMutableDictionary *_digitalFlashLTMMetadata;
    double _digitalFlashLTMExposureTime;
    float _digitalFlashLTMGain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)usesCustomProcessingFlow;

- (void)reset;
- (void)dealloc;
- (int)process;
- (id)initWithConfiguration:(id)a0;
- (int)prepare;
- (void)input:(id)a0 addFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (unsigned int)auxiliaryPixelFormatForInput:(id)a0;
- (id)externalMemoryDescriptor;
- (id)metalImageBufferProcessor;
- (struct __CVBuffer { } *)newOutputAuxiliaryPixelBufferForUniqueID:(unsigned long long)a0 pixelFormat:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (struct __CVBuffer { } *)newOutputPixelBufferForUniqueID:(unsigned long long)a0 pixelFormat:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (void)notifyProcessInputFrameForUniqueID:(unsigned long long)a0;
- (void)outputFrameCompleted:(id)a0;
- (void)outputFrameEnqueueFailure:(id)a0;
- (void)outputFrameEnqueued:(id)a0;
- (void)outputFrameGPUFailure:(id)a0;
- (unsigned int)outputPixelFormatForCaptureType:(int)a0 captureFlags:(unsigned long long)a1 processingMode:(int)a2;
- (unsigned int)outputPixelFormatForCaptureType:(int)a0 captureFlags:(unsigned long long)a1 processingMode:(int)a2 isQuadra:(BOOL)a3;
- (unsigned int)outputPixelFormatForCaptureType:(int)a0 processingMode:(int)a1;
- (unsigned int)outputPixelFormatForInput:(id)a0;
- (id)requestForInput:(id)a0 delegate:(id)a1 errOut:(int *)a2;

@end
