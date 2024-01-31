@class BWDataBufferPool, BWNodeInput, NSMutableArray;

@interface BWTimeOfFlightSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    double _lastEmittedPTS;
    NSMutableArray *_pointCloudBufferQueue;
    NSMutableArray *_videoBufferQueue;
    struct opaqueCMFormatDescription { } *_pointCloudFormatDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    int _maxVideoBufferQueueDepth;
    int _maxPointCloudBufferQueueDepth;
    BWDataBufferPool *_dataBufferPool;
}

@property (readonly) BWNodeInput *videoInput;
@property (readonly) BWNodeInput *pointCloudInput;

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;

@end
