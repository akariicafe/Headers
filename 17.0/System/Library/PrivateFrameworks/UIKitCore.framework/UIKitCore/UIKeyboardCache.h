@class NSSet, TIImageCacheClient, NSMutableSet, _UIActionWhenIdle;

@interface UIKeyboardCache : NSObject {
    TIImageCacheClient *_store;
    NSSet *_layouts;
    NSMutableSet *_activeRenderers;
}

@property (retain, nonatomic) _UIActionWhenIdle *idleAction;

+ (id)sharedInstance;
+ (BOOL)enabled;
+ (BOOL)enabledForTraitCollection:(id)a0;

- (void)purge;
- (id)init;
- (void)dealloc;
- (void)_didIdleAndShouldWait;
- (void)decrementExpectedRender:(id)a0;
- (void)commitTransaction;
- (struct CGImage { } *)cachedImageForKey:(id)a0 fromLayout:(id)a1;
- (struct CGImage { } *)cachedCompositeImageForCacheKeys:(id)a0 fromLayout:(id)a1 opacities:(id)a2;
- (void)clearNonPersistentCache;
- (void).cxx_destruct;
- (struct CGImage { } *)cachedImageForKey:(id)a0 fromLayout:(id)a1 traitCollection:(id)a2;
- (void)_didIdle;
- (void)incrementExpectedRender:(id)a0;
- (void)drawCachedImage:(id)a0 alpha:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)uniqueLayoutsFromInputModes:(id)a0;
- (id)displayImagesForView:(id)a0 fromLayout:(id)a1 imageFlags:(id)a2;
- (void)updateCacheForInputModes:(id)a0;

@end
