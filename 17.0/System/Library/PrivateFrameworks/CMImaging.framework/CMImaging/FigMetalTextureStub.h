@class NSString;
@protocol MTLDevice, MTLHeap, MTLTexture, MTLBuffer, MTLResource;

@interface FigMetalTextureStub : NSObject <MTLTexture>

@property (copy) NSString *label;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long usage;
@property (readonly) id<MTLResource> rootResource;
@property (readonly) id<MTLTexture> parentTexture;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) id<MTLBuffer> buffer;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long depth;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long arrayLength;
@property (readonly, getter=isShareable) BOOL shareable;
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property (readonly) unsigned long long firstMipmapInTail;
@property (readonly) unsigned long long tailSizeInBytes;
@property (readonly) BOOL isSparse;
@property (readonly) BOOL allowGPUOptimizedContents;
@property (readonly) long long compressionType;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } swizzle;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;

@end
