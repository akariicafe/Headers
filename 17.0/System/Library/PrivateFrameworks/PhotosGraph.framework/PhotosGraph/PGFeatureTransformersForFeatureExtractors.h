@class NSMutableDictionary;

@interface PGFeatureTransformersForFeatureExtractors : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureTransformersForFeatureExtractors;

- (id)init;
- (void).cxx_destruct;
- (void)addFeatureTransformers:(id)a0 forFeatureExtractorName:(id)a1;
- (id)featureTransformersForFeatureExtractorName:(id)a0;

@end
