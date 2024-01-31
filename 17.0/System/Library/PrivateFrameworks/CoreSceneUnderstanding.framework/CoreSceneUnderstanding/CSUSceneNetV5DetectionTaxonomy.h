@interface CSUSceneNetV5DetectionTaxonomy : CSUTaxonomy {
    struct shared_ptr<csu::Taxonomy<csu::ObjectDetectionTaxonomyNode>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _detectionTaxonomy;
}

@property (readonly, nonatomic) struct shared_ptr<csu::Taxonomy<csu::ObjectDetectionTaxonomyNode>> { void *x0; struct __shared_weak_count *x1; } taxonomy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTaxonomy:(struct shared_ptr<csu::Taxonomy<csu::ObjectDetectionTaxonomyNode>> { void *x0; struct __shared_weak_count *x1; })a0;

@end
