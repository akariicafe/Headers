@class NSString, VKRasterTileOverlayProviderData, VKCustomTileOverlayProviderData, VKVectorOverlayData;
@protocol VKOverlayDelegate;

@interface VKOverlay : NSObject <VKVectorOverlayDelegate, VKRasterTileOverlayProviderDelegate, VKCustomTileOverlayProviderDelegate> {
    BOOL _canProvideVectorGeometry;
    id<VKOverlayDelegate> _delegate;
    unsigned int identifier;
    struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _flyoverContainer;
    struct weak_ptr<md::OverlayContainer> { struct OverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _standardContainer;
    VKVectorOverlayData *_vectorData;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _vectorDataLock;
    VKRasterTileOverlayProviderData *_rasterTileProvider;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _rasterTileProviderLock;
    VKCustomTileOverlayProviderData *_customTileProvider;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _customTileProviderLock;
}

@property (readonly, nonatomic) struct shared_ptr<md::RasterTileOverlayStyle> { struct RasterTileOverlayStyle *__ptr_; struct __shared_weak_count *__cntrl_; } rasterStyle;
@property (readonly, nonatomic) struct shared_ptr<md::RasterTileOverlayStyle> { struct RasterTileOverlayStyle *__ptr_; struct __shared_weak_count *__cntrl_; } customStyle;
@property (nonatomic) struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer *x0; struct __shared_weak_count *x1; } flyoverContainer;
@property (nonatomic) struct weak_ptr<md::OverlayContainer> { struct OverlayContainer *x0; struct __shared_weak_count *x1; } standardContainer;
@property (nonatomic) struct RunLoopController { struct MapEngine *x0; long long x1; } *runLoopController;
@property (weak, nonatomic) id<VKOverlayDelegate> delegate;
@property (readonly) BOOL canProvideVectorData;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } replaceMapContentInRect;
@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long fallbackable;
@property (readonly, nonatomic) unsigned int identifier;
@property (nonatomic) long long blendMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned char)anisotropy;
- (id)init;
- (void)dealloc;
- (void)clearDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setNeedsDisplayForReason:(unsigned long long)a0;
- (void)setNeedsDisplayInRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a0 level:(long long)a1 reason:(unsigned long long)a2;
- (unsigned long long)estimatedCostForCustomTileData:(id)a0;
- (void)onVisibleTiles:(id)a0;
- (void)_updateCustomTileProvider;
- (void)_updateRasterTileProvider;
- (void)_updateVectorData;
- (BOOL)areResourcesRequired;
- (BOOL)canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (BOOL)canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withData:(id)a1;
- (BOOL)canPossiblyDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)customTileOverlayDidChangeAlpha:(id)a0;
- (void)customTileOverlayDidChangeDisplayRate:(id)a0;
- (void)customTileOverlayNeedsDisplay:(id)a0;
- (void)customTileOverlayNeedsInvalidate:(id)a0;
- (id)customTileProvider;
- (void)didEnterKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withFallback:(BOOL)a1;
- (void)didExitKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 inContext:(struct CGContext { } *)a1;
- (void)drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withData:(id)a1 inIOSurface:(struct __IOSurface { } *)a2 withTimestamp:(double)a3;
- (void)drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withData:(id)a1 inTexture:(id)a2 withTimestamp:(double)a3 withTileScale:(float)a4;
- (void)rasterTileOverlayDidChangeAlpha:(id)a0;
- (void)rasterTileOverlayNeedsDisplay:(id)a0;
- (void)rasterTileOverlayNeedsInvalidate:(id)a0;
- (id)rasterTileProvider;
- (BOOL)shouldUseMetalTexture;
- (id)vectorData;
- (void)vectorOverlayNeedsDisplay:(id)a0 needsFullInvalidate:(BOOL)a1;

@end
