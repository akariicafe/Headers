@class BWNodeInput, NSArray, BWNodeError, BWNodeOutput;

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {
    long long _currentSettingsID;
    NSArray *_baseZoomFactors;
    struct opaqueCMSampleBuffer { } *_widerFOVBuffer;
    struct opaqueCMSampleBuffer { } *_narrowerFOVBuffer;
    BWNodeError *_widerFOVError;
    BWNodeError *_narrowerFOVError;
    BWNodeInput *_widerFOVInput;
    BWNodeInput *_narrowerFOVInput;
    BWNodeOutput *_widerFOVOutput;
    BWNodeOutput *_narrowerFOVOutput;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithBaseZoomFactors:(id)a0;

@end
