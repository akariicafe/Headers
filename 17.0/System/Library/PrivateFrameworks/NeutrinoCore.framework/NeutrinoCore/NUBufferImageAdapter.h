@class NSString, NUImageLayout, NUColorSpace, NUPixelFormat, NURegion;
@protocol NUBufferProvider;

@interface NUBufferImageAdapter : NSObject <NUBufferImage> {
    id<NUBufferProvider> _bufferProvider;
}

@property (readonly) NUImageLayout *layout;
@property (readonly) NUPixelFormat *format;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) struct { long long x0; long long x1; } size;
@property (readonly, copy) NURegion *validRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugQuickLookObject;
- (id)init;
- (void).cxx_destruct;
- (id)immutableImageCopy;
- (id)initWithBuffer:(id)a0 colorSpace:(id)a1 validRegion:(id)a2;
- (id)mutableImageCopy;
- (id)purgeableImageCopy;
- (void)readBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithBufferProvider:(id)a0 colorSpace:(id)a1 validRegion:(id)a2;
- (id)mutablePurgeableImageCopy;

@end
