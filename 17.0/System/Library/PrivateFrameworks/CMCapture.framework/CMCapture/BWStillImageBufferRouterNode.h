@class NSArray, BWNodeOutput, NSDictionary;

@interface BWStillImageBufferRouterNode : BWNode {
    BOOL _usingBravoDevice;
    BOOL _usingPearlDevice;
    BOOL _HDRSupported;
    BOOL _SISSupported;
    BOOL _GNRSISSupported;
    BOOL _LTMHDRSupported;
    NSArray *_inputPortTypes;
    NSDictionary *_portTypeToInput;
}

@property (readonly, nonatomic) BWNodeOutput *defaultOutput;
@property (readonly, nonatomic) BWNodeOutput *HDROutput;
@property (readonly, nonatomic) BWNodeOutput *SISOutput;
@property (readonly, nonatomic) BWNodeOutput *bravoTelephotoOutput;
@property (readonly, nonatomic) BWNodeOutput *pearlInfraredOutput;

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithInputPortTypes:(id)a0 HDRSupported:(BOOL)a1 SISSupported:(BOOL)a2 GNRSISSupported:(BOOL)a3 LTMHDRSupported:(BOOL)a4 depthDataDeliveryEnabled:(BOOL)a5;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (id)inputForPortType:(id)a0;

@end
