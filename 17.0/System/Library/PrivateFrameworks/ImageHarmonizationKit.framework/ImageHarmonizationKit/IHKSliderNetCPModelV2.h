@class NSArray, NSString, IHKFilterSequence, NSDictionary;

@interface IHKSliderNetCPModelV2 : IHKSliderNetCPModel {
    struct shared_ptr<ik::EspressoNet> { struct EspressoNet *__ptr_; struct __shared_weak_count *__cntrl_; } styleTransferNet;
    struct shared_ptr<ik::EspressoNet> { struct EspressoNet *__ptr_; struct __shared_weak_count *__cntrl_; } contentFVecNet;
    struct shared_ptr<ik::EspressoNet> { struct EspressoNet *__ptr_; struct __shared_weak_count *__cntrl_; } styleFVecNet;
}

@property (retain) NSArray *adjustmentEndpoints;
@property (retain) NSString *contentFVecEndpoint;
@property (retain) NSString *styleFVecEndpoint;
@property (retain) NSArray *contentFVecShape;
@property (retain) NSArray *styleFVecShape;
@property (retain) NSString *stemType;
@property (retain) IHKFilterSequence *filterSequence;
@property struct CGSize { double width; double height; } imageSize;
@property (retain) NSArray *sliderOrder;
@property (retain) NSDictionary *sliderSpecs;
@property struct CGColorSpace { } *colorSpace;

- (id)initWithModel:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)contentFVecSize;
- (id)applyAdjustments:(id)a0 toCIImage:(id)a1 error:(id *)a2;
- (id)initWithModel:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer { } *)a0 scenePrint:(id)a1 error:(id *)a2;
- (id)predictSlidersForStyleVector:(id)a0 contentVector:(id)a1 error:(id *)a2;
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer { } *)a0 scenePrint:(id)a1 error:(id *)a2;
- (unsigned long long)styleFVecSize;

@end
