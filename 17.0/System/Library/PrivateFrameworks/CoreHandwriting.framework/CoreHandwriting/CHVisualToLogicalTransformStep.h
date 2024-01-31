@interface CHVisualToLogicalTransformStep : CHPostprocessingStepModifyingOriginalTokens {
    int _mode;
    struct UBiDi { } *_icuBiDiTransform;
    int _baseDirection;
}

- (void)dealloc;
- (id)initWithBaseDirection:(int)a0 mode:(int)a1;
- (id)process:(id)a0 options:(id)a1;

@end
