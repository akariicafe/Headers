@class NSArray, NSString, NSURL, CRTitleParameters, CRConfidenceThresholds;

@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration

@property float mediumConfidenceThreshold;
@property float highConfidenceThreshold;
@property (readonly) NSURL *customModelURL;
@property (readonly) long long batchSize;
@property (readonly) long long maxConcurrentBatches;
@property (readonly) NSArray *inputWidths;
@property (readonly) double inputHeight;
@property (readonly) unsigned long long paddingMode;
@property (readonly) BOOL decodeWithLM;
@property (readonly) BOOL filterWithLM;
@property (readonly) NSArray *customWords;
@property (readonly) float precisionThreshold;
@property (readonly) NSString *locale;
@property (readonly) CRTitleParameters *titleParameters;
@property (readonly) CRConfidenceThresholds *confidenceThresholds;

- (void).cxx_destruct;
- (id)initV2DefaultConfigWithOptions:(id)a0;
- (id)initV1DefaultConfigWithOptions:(id)a0;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (long long)bestFitWidthIndexForAspectRatio:(double)a0;
- (id)initWithLocale:(id)a0 imageReaderOptions:(id)a1 error:(id *)a2;
- (void)setDefaultConfidenceThresholdsForRevision:(unsigned long long)a0;
- (id)textFeatureFilter;
- (BOOL)usesAppleNeuralEngine;

@end
