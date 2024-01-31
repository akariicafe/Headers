@class NSString, NSMutableArray;

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader> {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } intercept;
    struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { void *__value_; } __end_cap_; } weights;
    NSMutableArray *classLabels;
    long long classType;
    int postEvalTransForm;
    int classEncoding;
    struct shared_ptr<CoreML::Specification::Model> { struct Model *__ptr_; struct __shared_weak_count *__cntrl_; } m_spec;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classify:(id)a0 error:(id *)a1;
- (BOOL)calculateClassProbability:(double *)a0 input:(id)a1 error:(id *)a2;
- (id)classify:(id)a0 topK:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

@end
