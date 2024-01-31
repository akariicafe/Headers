@class NSArray, NSString, NSDictionary, IHKFilterSequence;

@interface IHKSliderNetCPModelV1 : IHKSliderNetCPModel {
    struct shared_ptr<ik::EspressoNet> { struct EspressoNet *__ptr_; struct __shared_weak_count *__cntrl_; } styleTransferNet;
    struct shared_ptr<ik::EspressoNet> { struct EspressoNet *__ptr_; struct __shared_weak_count *__cntrl_; } contentFVecNet;
    struct shared_ptr<ik::EspressoNet> { struct EspressoNet *__ptr_; struct __shared_weak_count *__cntrl_; } styleFVecNet;
}

@property (retain) NSArray *adjustmentEndpoints;
@property (retain) NSString *contentFVecEndpoint;
@property (retain) NSString *styleFVecEndpoint;
@property (retain) NSArray *contentFVecShape;
@property (retain) NSArray *styleFVecShape;
@property struct CGSize { double width; double height; } imageSize;
@property (retain) NSArray *sliderOrder;
@property (retain) NSDictionary *sliderSpecs;
@property (retain) IHKFilterSequence *filterSequence;
@property struct CGColorSpace { } *colorSpace;

- (id)initWithModel:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)contentFVecSize;
- (id)applyAdjustments:(id)a0 toCIImage:(id)a1 error:(id *)a2;
- (id)getValueForAdjustment:(id)a0 adjustments:(id)a1;
- (id)initWithModel:(id)a0 options:(id)a1 error:(id *)a2;
- (struct EspressoTensor { void /* function */ **x0; int x1; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; } x2; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *x0; struct __shared_weak_count *x1; } x3; })newTensorWithCorrectShape:(struct EspressoTensor { void /* function */ **x0; int x1; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; } x2; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *x0; struct __shared_weak_count *x1; } x3; })a0 shape:(id)a1;
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer { } *)a0 scenePrint:(id)a1 error:(id *)a2;
- (id)predictSlidersForStyleVector:(id)a0 contentVector:(id)a1 error:(id *)a2;
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer { } *)a0 scenePrint:(id)a1 error:(id *)a2;
- (unsigned long long)styleFVecSize;

@end
