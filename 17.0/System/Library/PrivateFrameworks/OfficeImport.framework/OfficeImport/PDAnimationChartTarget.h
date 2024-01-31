@interface PDAnimationChartTarget : PDAnimationShapeTarget {
    BOOL mHasCatagoryIndex;
    int mCatagoryIndex;
    BOOL mHasSeriesIndex;
    int mSeriesIndex;
    BOOL mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setSeriesIndex:(int)a0;
- (BOOL)hasSeriesIndex;
- (int)seriesIndex;
- (int)buildStep;
- (int)catagoryIndex;
- (int)chartSubElementType;
- (BOOL)hasBuildStep;
- (BOOL)hasCatagoryIndex;
- (void)setBuildStep:(int)a0;
- (void)setCatagoryIndex:(int)a0;
- (void)setChartSubElementType:(int)a0;

@end
