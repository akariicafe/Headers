@protocol VNObservationsRecipient;

@interface VNImageAnalyzerMultiDetectorAnalysisConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) id<VNObservationsRecipient> observationsRecipient;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)analysisTypes;
- (id)initWithObservationsRecipient:(id)a0;
- (unsigned int)labelsListType;

@end
