@class NSDictionary, NSArray, IHKFilterSequence;

@interface IHKSliderNetCPModel : NSObject {
    struct shared_ptr<ik::PixelBufferTransfer> { struct PixelBufferTransfer *__ptr_; struct __shared_weak_count *__cntrl_; } _resampler;
}

@property unsigned long long gatingMethod;
@property (retain) NSDictionary *info;
@property (readonly) struct CGSize { double width; double height; } imageSize;
@property (readonly) struct CGColorSpace { } *colorSpace;
@property (readonly) NSArray *sliderOrder;
@property (readonly) NSDictionary *sliderSpecs;
@property (readonly) IHKFilterSequence *filterSequence;

+ (id)loadModelAtPath:(id)a0;
+ (id)loadJSonFrom:(id)a0;
+ (id)loadModelAtPath:(id)a0 options:(id)a1 error:(id *)a2;

- (id)initWithModel:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithModelType:(unsigned long long)a0 options:(id)a1 error:(id *)a2;
- (float)gatingScoreToTransferStyleFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (id)predictSlidersToTransferStyleFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (id)predictStylePrintForPixelBuffer:(struct __CVBuffer { } *)a0 scenePrint:(id)a1 error:(id *)a2;
- (struct shared_ptr<ik::PixelBufferTransfer> { struct PixelBufferTransfer *x0; struct __shared_weak_count *x1; })resampler;
- (id)applyAdjustments:(id)a0 toCIImage:(id)a1 error:(id *)a2;
- (BOOL)checkColorspaceForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)computeClipEmbeddingForImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (struct CGColorSpace { } *)extractColorSpaceFromInfo:(id)a0;
- (float)gatingScoreForStyleVector:(id)a0 contentVector:(id)a1;
- (float)gatingScoreForStyleVector:(id)a0 contentVector:(id)a1 error:(id *)a2;
- (id)initWithModel:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelType:(unsigned long long)a0;
- (BOOL)pixelBufferShapesMatchRequirement:(struct __CVBuffer { } *)a0;
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer { } *)a0 scenePrint:(id)a1 error:(id *)a2;
- (id)predictSlidersForStyleVector:(id)a0 contentVector:(id)a1 error:(id *)a2;
- (id)predictStylePrintForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer { } *)a0 scenePrint:(id)a1 error:(id *)a2;
- (struct __CVBuffer { } *)preprocessPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (struct PixelBufferTensor { void /* function */ **x0; int x1; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; } x2; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *x0; struct __shared_weak_count *x1; } x3; })preprocessTensor:(struct PixelBufferTensor { void /* function */ **x0; int x1; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; } x2; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *x0; struct __shared_weak_count *x1; } x3; })a0;
- (unsigned long long)product:(id)a0;
- (struct __CVBuffer { } *)resizePixelBuffer:(struct __CVBuffer { } *)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)useClipEmbedding;

@end
