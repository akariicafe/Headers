@protocol MTLTexture, MTLDevice;

@interface PXGCornerRadiusMask : NSObject {
    id<MTLDevice> _device;
}

@property (retain) id<MTLTexture> atomicTexture;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) long long texturePixelSide;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) double maxCornerRadius;
@property (readonly, nonatomic) long long numberOfSlices;
@property (readonly, nonatomic) long long byteSize;

+ (id)_loadQueue;
+ (id)cornerRadiusMaskForDevice:(id)a0 maxCornerRadius:(double)a1 screenScale:(double)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_loadCornerRadiusTexture;
- (id)initWithDevice:(id)a0 maxCornerRadius:(double)a1 screenScale:(double)a2;

@end
