@interface ANSTVideoMaskRefineAlgorithmResult : ANSTResult {
    struct __CVBuffer { } *_skinMask;
    struct __CVBuffer { } *_hairMask;
    struct __CVBuffer { } *_personMask;
}

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)_init;
- (struct __CVBuffer { } *)refinedMaskForSemanticCategory:(id)a0;
- (id)initWithSkinMask:(struct __CVBuffer { } *)a0 hairMask:(struct __CVBuffer { } *)a1 personMask:(struct __CVBuffer { } *)a2;

@end
