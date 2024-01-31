@class _TtC17KnowledgeGraphKit28MAWrapperLearningStreamUtils;

@interface MALearningStreamUtils : NSObject {
    _TtC17KnowledgeGraphKit28MAWrapperLearningStreamUtils *_underlyingObject;
}

+ (id)extractFeaturesForMomentNodes:(id)a0 progressBlock:(id /* block */)a1;
+ (id)extractFeaturesWithGraph:(id)a0 mappedAssetFeatures:(id)a1 progressBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)classifyAssetsWithInputFeatureVectors:(id)a0;
- (id)classifyMomentsWithInputFeatureVectors:(id)a0;
- (id)initWithClasses:(id)a0 momentFeatureVectors:(id)a1 assetFeatureVectors:(id)a2;

@end
