@class AXMTextSpecialCase, AXMSemanticTextFactory, AXMTextLayoutManager;

@interface AXMMediaAnalysisTextDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory;
@property (retain, nonatomic) AXMTextLayoutManager *textLayoutManager;
@property (retain, nonatomic) AXMTextSpecialCase *specialCaseManager;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;
+ (long long)recognitionLevelFromOptions:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)detectTextSkew:(id)a0;
- (id)_sequencesForObservations:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (id)_textDetectionOptions:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;

@end
