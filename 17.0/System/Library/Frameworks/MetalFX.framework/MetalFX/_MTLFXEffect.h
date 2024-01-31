@protocol MTLFXEffectTracingDelegate;

@interface _MTLFXEffect : NSObject {
    unsigned long long _encodeID;
}

@property (weak) id<MTLFXEffectTracingDelegate> tracingDelegate;
@property (readonly) unsigned long long effectID;

- (id)init;
- (void).cxx_destruct;
- (void)_beginEncode;
- (void)_didCreateBlitCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;
- (void)_didCreateComputeCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;
- (void)_didCreateRenderCommandEncoder:(id)a0 forEncode:(unsigned long long)a1;

@end
