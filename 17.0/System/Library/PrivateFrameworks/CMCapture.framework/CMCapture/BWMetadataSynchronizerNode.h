@class NSArray;

@interface BWMetadataSynchronizerNode : BWNode {
    NSArray *_syncMetadataForPortTypes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct { id x0; struct opaqueCMSimpleQueue *x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } *_inputsStorage;
    int _numEODMessagesReceived;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (id)initWithMetadataInputs:(id)a0 syncMetadataForPortTypes:(id)a1;

@end
