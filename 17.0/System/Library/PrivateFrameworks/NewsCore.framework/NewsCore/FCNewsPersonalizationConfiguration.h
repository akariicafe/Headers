@class FCNewsPersonalizationFeatureConfiguration, FCNewsPersonalizationTrainingConfiguration, FCNewsArticleEmbeddingsConfiguration, FCStatelessPersonalizationConfiguration, FCUserEventHistoryTrackingConfiguration;

@interface FCNewsPersonalizationConfiguration : NSObject

@property (retain, nonatomic) FCStatelessPersonalizationConfiguration *statelessPersonalizationConfiguration;
@property (retain, nonatomic) FCUserEventHistoryTrackingConfiguration *trackingConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationFeatureConfiguration *featureConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationTrainingConfiguration *trainingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingsConfiguration *articleEmbeddingsConfiguration;

+ (id)defaultConfiguration;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
