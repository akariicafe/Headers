@class NSDictionary, NSMapTable, NSMutableSet;

@interface BWEspressoInferenceStorage : BWInferenceProviderStorage {
    NSDictionary *_bindingNameByRequirement;
    NSMapTable *_tensorByRequirement;
    NSMutableSet *_requirementsUsingTensors;
    NSMutableSet *_requirementsUsingPixelBuffers;
}

+ (void)initialize;

- (void)clear;
- (void)addPixelBufferInUseRequirement:(id)a0;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingRequirement:(id)a0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (id)bindingNameForRequirement:(id)a0;
- (void)addTensorInUseRequirement:(id)a0;
- (id)initWithBindingNameByRequirement:(id)a0 requirementsNeedingPixelBuffers:(id)a1 requirementsNeedingPixelBufferPools:(id)a2 requirementsNeedingTensors:(id)a3;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)tensorForRequirement:(id)a0;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;

@end
