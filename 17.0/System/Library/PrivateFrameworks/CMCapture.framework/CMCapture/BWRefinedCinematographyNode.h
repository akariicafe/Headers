@class PTCinematographyRefinement, BWNodeInput, BWNodeOutput;

@interface BWRefinedCinematographyNode : BWNode {
    PTCinematographyRefinement *_refinementSession;
    BOOL _isRefinementSessionActive;
    int _numEODMessagesReceived;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAudioPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstAudioPTS;
}

@property (readonly, nonatomic) BWNodeInput *videoInput;
@property (readonly, nonatomic) BWNodeInput *audioInput;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeOutput *audioOutput;

+ (void)initialize;

- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithAudioEnabled:(BOOL)a0;

@end
