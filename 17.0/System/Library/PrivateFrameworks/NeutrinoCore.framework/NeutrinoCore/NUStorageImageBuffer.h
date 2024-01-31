@class NUPurgeableStoragePool, NSString, NUColorSpace, NUPixelFormat;
@protocol NUPurgeableStorage;

@interface NUStorageImageBuffer : NSObject <NUImageBuffer>

@property (readonly, nonatomic) id<NUPurgeableStorage> storage;
@property (readonly, nonatomic) NUPurgeableStoragePool *pool;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, nonatomic) struct __CVBuffer { } *CVPixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageBufferWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 fromPool:(id)a2;

@end
