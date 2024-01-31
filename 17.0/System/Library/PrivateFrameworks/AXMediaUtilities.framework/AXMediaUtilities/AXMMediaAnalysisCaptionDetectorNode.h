@class AXMMediaAnalysisSceneDetectorNode, AXMLanguageTranslator;

@interface AXMMediaAnalysisCaptionDetectorNode : AXMEvaluationNode {
    AXMLanguageTranslator *_languageTranslator;
}

@property (weak, nonatomic) AXMMediaAnalysisSceneDetectorNode *sceneDetector;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_addCaptionFeaturesToContext:(id)a0 metrics:(id)a1 fromResult:(id)a2;
- (id)_captionsFromAnalysis:(id)a0 forType:(unsigned long long)a1;
- (id)_mediaAnalysisCaptionResultForPHAssetsFromAnalysis:(id)a0;
- (id)_mediaAnalysisCaptionResultFromResults:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (id)translatedTextForCaption:(id)a0 withContext:(id)a1 metrics:(id)a2;

@end
