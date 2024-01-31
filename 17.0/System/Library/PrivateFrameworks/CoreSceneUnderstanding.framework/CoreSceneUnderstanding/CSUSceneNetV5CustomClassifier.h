@class CSUSceneNetV5CustomClassifierConfiguration;

@interface CSUSceneNetV5CustomClassifier : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { struct PixelBufferTransfer *__value_; } __ptr_; } _transferSession;
}

@property (readonly, nonatomic) CSUSceneNetV5CustomClassifierConfiguration *configuration;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)enumerateLabelsFromClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (id)labelsFromClassificationLikelihoods:(id)a0;
- (BOOL)loadResourcesAndReturnError:(id *)a0;
- (void)runOnInputScenePrint:(id)a0 completion:(id /* block */)a1;
- (void)unsafeRunOnInputScenePrint:(id)a0 completion:(id /* block */)a1;

@end
