@class CAEDRMetadata, NSDictionary;
@protocol MTLDevice;

@interface CAMetalLayer : CALayer {
    void *_priv;
}

@property (nonatomic) BOOL fenceEnabled;
@property (nonatomic) BOOL serverSyncEnabled;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) BOOL disableProMotionCompatibility;
@property (nonatomic) BOOL allowsDisplayCompositingWithCopy;
@property (nonatomic) BOOL exclusiveMode;
@property (nonatomic) double inputTime;
@property (nonatomic) BOOL nonDefaultColorspace;
@property (nonatomic) double drawableTimeoutSeconds;
@property (nonatomic) unsigned long long protectionOptions;
@property (nonatomic) unsigned long long textureUsage;
@property (readonly, nonatomic) unsigned long long displayCompositingInternalStatus;
@property (retain) id<MTLDevice> device;
@property (readonly) id<MTLDevice> preferredDevice;
@property unsigned long long pixelFormat;
@property BOOL framebufferOnly;
@property struct CGSize { double x0; double x1; } drawableSize;
@property unsigned long long maximumDrawableCount;
@property BOOL presentsWithTransaction;
@property struct CGColorSpace { } *colorspace;
@property BOOL wantsExtendedDynamicRangeContent;
@property (retain) CAEDRMetadata *EDRMetadata;
@property BOOL allowsNextDrawableTimeout;
@property (copy) NSDictionary *developerHUDProperties;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)_display;
- (void)discardContents;
- (id)init;
- (void)dealloc;
- (id)newDrawable;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)setDisplaySyncEnabled:(BOOL)a0;
- (void)_didCommitLayer:(void *)a0;
- (id)nextDrawable;
- (id)shimDrawable:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)removeBackBuffers;
- (BOOL)displaySyncEnabled;
- (void)setColorspace:(struct CGColorSpace { } *)a0 nonDefault:(BOOL)a1;
- (void)setContents:(id)a0;
- (BOOL)isDrawableAvailable;
- (void)didChangeValueForKey:(id)a0;

@end
