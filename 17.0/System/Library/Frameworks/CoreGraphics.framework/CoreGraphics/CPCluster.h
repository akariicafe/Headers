@interface CPCluster : NSObject <CPDisposable> {
    const struct { double x0; unsigned int x1; double x2; double x3; unsigned int x4; double x5; double x6; BOOL x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; BOOL x19; } *profile;
    unsigned int xCount;
    double *x;
    double *dx;
    unsigned int *dxOrderIndex;
    unsigned int interClusterMinIndex;
    double *ddx;
    unsigned int *ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    struct { unsigned int x0; double x1; double x2; double x3; } *xStats;
    unsigned int levels;
    struct { unsigned int x0; double x1; double x2; double x3; } *dxStats;
    BOOL ownData;
    BOOL ownDifferences;
}

+ (void)clusterTextLine:(id)a0;
+ (void)clusterTextLine:(id)a0 withCluster:(id)a1 atLevel:(unsigned int)a2 withMaximumWordGap:(double *)a3 andMaximumLetterGap:(double *)a4;
+ (unsigned int *)createOrderIndexFor:(double *)a0 ofSize:(unsigned int)a1;
+ (void)reclusterTextLine:(id)a0 fromWordIndex:(unsigned int)a1 count:(unsigned int *)a2;

- (id)init;
- (void)dealloc;
- (id)initWithProfile:(const struct { double x0; unsigned int x1; double x2; double x3; unsigned int x4; double x5; double x6; BOOL x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; BOOL x19; } *)a0;
- (void)dispose;
- (void)finalize;
- (void)analyzeDensities;
- (BOOL)applyDifferenceHints:(struct { unsigned int x0; double x1; double x2; double x3; } *)a0 count:(unsigned int)a1;
- (void)analyzeDifferences;
- (void)assembleDataStats;
- (void)assembleDensityDifferenceStats;
- (void)assembleDifferenceStats;
- (unsigned int)clusterCount;
- (struct { unsigned int x0; double x1; double x2; double x3; })clusterStatisticsAtIndex:(unsigned int)a0;
- (BOOL)coalesceFrom:(unsigned int)a0 to:(unsigned int)a1;
- (void)computeDataFromDifferences;
- (void)computeDifferencesFromData;
- (struct { unsigned int x0; double x1; double x2; double x3; })differenceClusterStatisticsAtIndex:(unsigned int)a0;
- (void)findClusters:(double *)a0 count:(unsigned int)a1;
- (void)findClustersFromCharacterSequence:(id)a0 withSpaceHint:(BOOL)a1;
- (void)findClustersFromDifferences:(double *)a0 count:(unsigned int)a1;
- (void)findDensityClusters:(double *)a0 count:(unsigned int)a1;
- (BOOL)joinClosestLevelPairFrom:(unsigned int)a0 to:(unsigned int)a1;
- (BOOL)joinLevelsFrom:(unsigned int)a0 to:(unsigned int)a1;
- (struct { unsigned int x0; double x1; double x2; double x3; })largestClusterStatistics;
- (unsigned int)levels;
- (void)makeWords:(struct { unsigned int x0; unsigned int x1; int x2; int x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a0 count:(unsigned int)a1 fromCharacterSequence:(id)a2 charOffset:(unsigned int)a3;
- (void)resetAnalysis;
- (void)setMaximumClusterSpread:(double)a0;
- (void)setMinimumClusterSize:(unsigned int)a0;
- (void)setMinimumRecognizedInterClusterDifference:(double)a0;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)a0;
- (BOOL)splitLevelAtIndex:(unsigned int)a0 betweenValue:(double)a1 andValue:(double)a2;
- (void)splitSecondDifferences;
- (void)tryLevel0SplitBetween:(double)a0 and:(double)a1 usingHints:(struct { unsigned int x0; double x1; double x2; double x3; } *)a2;

@end
