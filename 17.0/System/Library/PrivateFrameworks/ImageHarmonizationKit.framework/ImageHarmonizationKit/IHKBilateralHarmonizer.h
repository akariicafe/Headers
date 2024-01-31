@class NSString, NSLock;

@interface IHKBilateralHarmonizer : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _net;
    struct PixelBufferTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _fgInput;
    struct PixelBufferTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _bgInput;
    NSString *_fgName;
    NSString *_bgName;
    NSString *_outName;
    NSString *_gatingOutName;
    float _gatingThreshold;
    float _baseHarmonizationStrength;
    NSLock *_lock;
}

@property (readonly) NSString *networkPath;
@property (readonly) unsigned char supportsAlpha;

+ (id)getDefault;

- (void)load;
- (struct CGImage { } *)handleRequest:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)harmonize:(id)a0;
- (id)initWithNetwork:(id)a0 supportsAlpha:(unsigned char)a1 fgName:(id)a2 bgName:(id)a3 outName:(id)a4 gatingOutName:(id)a5 gatingThreshold:(float)a6 inputResolution:(unsigned long long)a7;
- (id)initWithNetwork:(id)a0 supportsAlpha:(unsigned char)a1 fgName:(id)a2 bgName:(id)a3 outName:(id)a4 gatingOutName:(id)a5 gatingThreshold:(float)a6 inputResolution:(unsigned long long)a7 baseHarmonizationStrength:(float)a8;
- (id)initWithNetwork:(id)a0 supportsAlpha:(unsigned char)a1 fgName:(id)a2 bgName:(id)a3 outName:(id)a4 inputResolution:(unsigned long long)a5;

@end
