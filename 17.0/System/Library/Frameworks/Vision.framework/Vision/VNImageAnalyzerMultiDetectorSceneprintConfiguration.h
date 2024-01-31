@interface VNImageAnalyzerMultiDetectorSceneprintConfiguration : VNImageAnalyzerMultiDetectorAnalysisConfiguration

@property (nonatomic) BOOL includeLabelsAndConfidences;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)analysisTypes;

@end
