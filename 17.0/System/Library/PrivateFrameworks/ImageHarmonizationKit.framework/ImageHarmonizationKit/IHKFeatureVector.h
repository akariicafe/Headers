@interface IHKFeatureVector : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct EspressoTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } tensor;

+ (id)copy:(id)a0;
+ (id)multiplyFeatureVector:(id)a0 byScalar:(float)a1;
+ (id)addFeatureVectorA:(id)a0 B:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)size;
- (id).cxx_construct;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (float)cosineSimilarity:(id)a0;
- (void)saveToTextFile:(id)a0;
- (id)initWithTensor:(struct EspressoTensor { void /* function */ **x0; int x1; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; } x2; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *x0; struct __shared_weak_count *x1; } x3; })a0;
- (void)debugPrintTensor:(id)a0;
- (id)featureVectorByAppendingFeatureVector:(id)a0;
- (float)l2Distance:(id)a0;
- (void)saveToBinaryFile:(id)a0;
- (id)subFeatureVectorWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
