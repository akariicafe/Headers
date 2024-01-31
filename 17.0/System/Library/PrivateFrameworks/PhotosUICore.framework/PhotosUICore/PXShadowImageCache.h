@class NSMapTable;

@interface PXShadowImageCache : NSObject {
    NSMapTable *_weakCache;
}

@property (class, readonly, nonatomic) PXShadowImageCache *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)stretchableShadowImageFor:(id)a0 cornerRadius:(double)a1 screenScale:(double)a2;

@end
