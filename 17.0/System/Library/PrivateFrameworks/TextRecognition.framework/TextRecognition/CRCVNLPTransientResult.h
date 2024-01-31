@class NSString, CVNLPTextDecodingResult, NSObject, CVNLPActivationMatrix;
@protocol OS_dispatch_semaphore;

@interface CRCVNLPTransientResult : NSObject <CRTextRecognizerDecodingTransientResult> {
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } activationsBuffer;
    struct optional<espresso_buffer_t> { union { char __null_state_; struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } __val_; } ; BOOL __engaged_; } indexBuffer;
}

@property (retain) CVNLPTextDecodingResult *greedyDecodingResult;
@property (retain) CVNLPActivationMatrix *activationMatrix;
@property (retain) NSString *decodingLocale;
@property (retain) NSObject<OS_dispatch_semaphore> *languageRecognitionActiveSem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithActivationMatrix:(id)a0 decodingLocale:(id)a1;
- (id)initWithActivationMatrix:(id)a0 decodingLocale:(id)a1 activationsBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a2;
- (id)initWithActivationMatrix:(id)a0 decodingLocale:(id)a1 activationsBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a2 indexBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a3;
- (struct ActivationMatrix { unsigned long long x0; unsigned long long x1; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x2; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x3; float *x4; float *x5; })modernizedActivationMatrix;

@end
