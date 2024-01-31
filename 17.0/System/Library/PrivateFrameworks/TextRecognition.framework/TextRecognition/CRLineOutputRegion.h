@class NSString, CRDetectedLineRegion, CRNormalizedQuad, NSUUID;

@interface CRLineOutputRegion : CRCompositeOutputRegion <CRLayoutLine>

@property (retain, nonatomic) CRDetectedLineRegion *detectedLineRegion;
@property (readonly) BOOL shouldWrapToNextLine;
@property BOOL useLineSeparatorAsLineBreak;
@property unsigned long long lineWrappingType;
@property (readonly) double confidenceScore;
@property (readonly) NSString *locale;
@property (readonly) struct CGSize { double x0; double x1; } rectifiedSize;
@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *uuid;

+ (id)lineWithCharacters:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)lineWithDetectedRegion:(id)a0;
+ (id)lineWithText:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)lineWithTextFeature:(id)a0 subfeatureType:(unsigned long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3;
+ (id)lineWithTextFeature:(id)a0 subfeatureType:(unsigned long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3 injectSpaceCharacter:(BOOL)a4;
+ (id)lineWithTextRegion:(id)a0 confidenceThresholdProvider:(id)a1 injectSpaceCharacter:(BOOL)a2;
+ (id)lineWithWords:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)type;
- (long long)wordCount;
- (void)appendLine:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxEstimateAfterTrimmingCharacters:(id)a0;
- (BOOL)computesNumberOfLinesFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithConfidence:(int)a0 baselineAngle:(double)a1;
- (id)joiningDelimiter;
- (unsigned long long)nmsOutputScale;
- (id)scriptCategoryResults;
- (id)sequenceScriptOutputResult;
- (unsigned long long)textType;

@end
