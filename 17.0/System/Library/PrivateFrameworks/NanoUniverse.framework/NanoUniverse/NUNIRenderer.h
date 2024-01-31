@class NSString;

@interface NUNIRenderer : NSObject

@property (readonly, nonatomic) unsigned long long rendererStyle;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) NSString *textureSuffix;

+ (void)_deallocInstanceWithPixelFormat:(unsigned long long)a0 rendererStyle:(unsigned long long)a1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)a0 textureSuffix:(id)a1 rendererStyle:(unsigned long long)a2;

- (void)dealloc;
- (void)discard;
- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (id)spheroidAtPoint:(SEL)a0 scene:(id)a1 viewport:(struct NUNIViewport { int x0; int x1; })a2;
- (id)initWithPixelFormat:(unsigned long long)a0 textureSuffix:(id)a1 rendererStyle:(unsigned long long)a2;
- (void)purgeUnusedWithScene:(id)a0;
- (void)renderOffscreenWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2;
- (void)renderWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2 passDescriptor:(id)a3;
- (void)renderWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 renderEncoder:(id)a2;

@end
