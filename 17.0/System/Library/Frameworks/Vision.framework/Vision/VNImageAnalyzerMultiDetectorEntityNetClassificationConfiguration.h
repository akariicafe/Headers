@class VNDisallowedList;

@interface VNImageAnalyzerMultiDetectorEntityNetClassificationConfiguration : VNImageAnalyzerMultiDetectorAnalysisConfiguration

@property (copy, nonatomic) VNDisallowedList *disallowedList;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned long long maximumLabels;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)analysisTypes;
- (id)initWithObservationsRecipient:(id)a0;
- (unsigned int)labelsListType;

@end
