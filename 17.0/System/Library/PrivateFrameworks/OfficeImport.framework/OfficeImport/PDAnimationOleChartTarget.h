@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (id)init;
- (unsigned long long)hash;
- (int)level;
- (void)setLevel:(int)a0;
- (BOOL)isEqual:(id)a0;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
