@interface CPTextObject : CPChunk {
    struct CGPoint { double x; double y; } anchor;
    BOOL metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (float)maxFontSize;
- (void)clearCachedInfo;
- (void)calculateMetrics;
- (double)maxFontLineHeight;
- (void)translateObjectYBy:(double)a0;

@end
