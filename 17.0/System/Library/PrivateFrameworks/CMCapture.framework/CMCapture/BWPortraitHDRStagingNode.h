@interface BWPortraitHDRStagingNode : BWNode {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _settingsID;
    BOOL _passthroughBuffer;
    struct opaqueCMSampleBuffer { } *_stagedBuffer;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)bufferReceivedWithFlags:(unsigned int)a0 error:(int)a1;

@end
