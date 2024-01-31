@interface WFLSMScoreNormalizedMap : WFLSMMap {
    float *maxScore;
    float *minScore;
}

- (void)dealloc;
- (id)evaluate:(id)a0;
- (id)initWithMap:(struct __LSMMap { } *)a0;

@end
