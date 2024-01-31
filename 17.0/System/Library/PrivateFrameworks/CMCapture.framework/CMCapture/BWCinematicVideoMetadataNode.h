@class BWNodeOutput;

@interface BWCinematicVideoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } *_metadataFormatDescription;
    struct opaqueCMFormatDescription { } *_audioMetadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    unsigned int _localIDForAperture_BE;
    unsigned int _localIDForDisparity_BE;
    unsigned int _localIDForCinematographyMetadata_BE;
    unsigned int _localIDForRenderingMetadata_BE;
    unsigned int _localIDForStabilizationMetadata_BE;
    unsigned int _localIDForDialogueLevel_BE;
    unsigned int _localIDForAmbienceLevel_BE;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *metadataOutput;
@property (readonly, nonatomic) BWNodeOutput *audioMetadataOutput;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithAudioEnabled:(BOOL)a0;

@end
