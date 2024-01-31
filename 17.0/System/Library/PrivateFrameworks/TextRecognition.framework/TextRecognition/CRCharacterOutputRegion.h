@class CRNormalizedPolyline;

@interface CRCharacterOutputRegion : CROutputRegion {
    CRNormalizedPolyline *_baseline;
}

+ (id)characterWithTextFeature:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 confidenceThresholdProvider:(id)a2;
+ (id)characterWithText:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)type;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesNumberOfLinesFromChildren;
- (BOOL)computesTranscriptFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)joiningDelimiter;

@end
