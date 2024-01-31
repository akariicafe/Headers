@class NSString, CSUSceneNetV5CustomClassifierTaxonomy;

@interface CSUSceneNetV5CustomClassifierConfiguration : NSObject {
    CSUSceneNetV5CustomClassifierTaxonomy *_taxonomy;
}

@property (readonly, copy, nonatomic) NSString *espressoNetworkPath;
@property (readonly, copy, nonatomic) NSString *inputImageTensorName;
@property (readonly, copy, nonatomic) NSString *taxonomyPath;
@property (readonly, copy, nonatomic) NSString *classificationTensorName;
@property int executionEngine;
@property (readonly, nonatomic) CSUSceneNetV5CustomClassifierTaxonomy *taxonomy;
@property (readonly, nonatomic) NSString *vocabularyName;
@property (readonly, nonatomic) long long customClassifierIdentifier;
@property (readonly, nonatomic) long long revision;

+ (id)availableCityNatureRevisions;
+ (id)availableClassifierAlphaRevisions;
+ (id)availableClassifierBetaRevisions;
+ (id)availableJunkHierarchicalRevisions;
+ (id)availableJunkLeafRevisions;
+ (id)cityNatureConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)classifierAlphaConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)classifierBetaConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)junkHierarchicalConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)junkLeafConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)validateAndInitCustomClassifierForRevision:(long long)a0 forNetworkPath:(id)a1 forTaxonomyPath:(id)a2 withInputImageTensorName:(id)a3 withVocabularyName:(id)a4 withClassificationTensorName:(id)a5 withIdentifier:(long long)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)initConfigurationForRevision:(long long)a0 espressoNetworkPath:(id)a1 inputImageTensorName:(id)a2 vocabularyName:(id)a3 taxonomyPath:(id)a4 identifier:(long long)a5 classificationTensorName:(id)a6;

@end
