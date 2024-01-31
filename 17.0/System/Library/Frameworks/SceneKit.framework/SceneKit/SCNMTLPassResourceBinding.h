@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding {
    struct { struct __C3DFXPassInput *x0; unsigned int x1; unsigned int x2; } *_inputs;
    struct __C3DFXPassInput { } *_samplerInput;
}

@property (nonatomic) long long inputsCount;
@property (nonatomic) long long bufferSize;

- (id)init;
- (void)dealloc;

@end
