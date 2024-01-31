@class NSDictionary, FCNewsTabiFeedPersonalizationOutputConfiguration;

@interface FCNewsTabiFeedPersonalizationConfiguration : NSObject

@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long titleEmbeddingDimension;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMaxTopicIds:(long long)a0 titleEmbeddingDimension:(long long)a1 fullBodyEmbeddingDimension:(long long)a2 bundleOutputConfiguration:(id)a3 nonBundleOutputConfiguration:(id)a4;

@end
