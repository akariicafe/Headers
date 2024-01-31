@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } *_sourceClock;
    struct OpaqueCMClock { } *_masterClock;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceTime; struct { long long value; int timescale; unsigned int flags; long long epoch; } syncedTime; } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
}

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (struct OpaqueCMClock { } *)masterClock;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithMediaType:(unsigned int)a0;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (struct OpaqueCMClock { } *)sourceClock;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;

@end
