@class CSUSceneNetV5SceneTaxonomy, CSUSceneNetV5DetectionTaxonomy, CSUSceneNetV5Configuration, CSUSceneNetV5AestheticsTaxonomy;

@interface CSUSceneNetV5 : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { struct PixelBufferTransfer *__value_; } __ptr_; } _transferSession;
    struct unique_ptr<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes>, std::default_delete<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes>>> { struct __compressed_pair<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes> *, std::default_delete<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes>>> { void *__value_; } __ptr_; } _sceneGraphicalModel;
    struct unique_ptr<csu::ObjectDetectionConfiguration, std::default_delete<csu::ObjectDetectionConfiguration>> { struct __compressed_pair<csu::ObjectDetectionConfiguration *, std::default_delete<csu::ObjectDetectionConfiguration>> { struct ObjectDetectionConfiguration *__value_; } __ptr_; } _objectDetectionConfiguration;
    struct unique_ptr<ImageDescriptorProcessorHyperplaneLSH, std::default_delete<ImageDescriptorProcessorHyperplaneLSH>> { struct __compressed_pair<ImageDescriptorProcessorHyperplaneLSH *, std::default_delete<ImageDescriptorProcessorHyperplaneLSH>> { struct ImageDescriptorProcessorHyperplaneLSH *__value_; } __ptr_; } _fingerprinter;
}

@property (readonly, nonatomic) CSUSceneNetV5SceneTaxonomy *sceneTaxonomy;
@property (readonly, nonatomic) CSUSceneNetV5AestheticsTaxonomy *aestheticsTaxonomy;
@property (readonly, nonatomic) CSUSceneNetV5DetectionTaxonomy *detectionTaxonomy;
@property (readonly, nonatomic) CSUSceneNetV5Configuration *configuration;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)enumerateHierarchicalSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (id)hashesFromFingerprintEmbedding:(id)a0;
- (void)_unsafeRunOnInputImage:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (id)allAestheticsAttributeScores:(id)a0;
- (id)allAestheticsGlobalScores:(id)a0;
- (id)allEntityNetClassificationLikelihoods:(id)a0;
- (id)allSceneClassificationLikelihoods:(id)a0;
- (id)base64HashesFromFingerprintEmbedding:(id)a0;
- (id)detectionResultFromScoreHeatMap:(id)a0 coordinateOffsetMap:(id)a1;
- (void)enumerateAestheticsAttributeScores:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateAestheticsGlobalScores:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateEntityNetClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateLeafSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)loadResources:(id *)a0;
- (struct __CVBuffer { } *)pixelBufferForSaliencyMap:(id)a0 error:(id *)a1;
- (BOOL)resampleImage:(struct __CVBuffer { } *)a0 intoInputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (void)runOnInputImage:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;

@end
