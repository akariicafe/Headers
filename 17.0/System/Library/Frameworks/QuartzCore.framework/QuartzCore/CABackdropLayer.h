@class NSString;
@protocol CABackdropLayerDelegate, CALayerDelegate;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *groupName;
@property BOOL usesGlobalGroupNamespace;
@property (copy) NSString *groupNamespace;
@property double scale;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backdropRect;
@property double marginWidth;
@property BOOL disablesOccludedBackdropBlurs;
@property BOOL captureOnly;
@property BOOL allowsInPlaceFiltering;
@property BOOL reducesCaptureBitDepth;
@property BOOL ignoresScreenClip;
@property double zoom;
@property BOOL tracksLuma;
@property (weak) id<CABackdropLayerDelegate, CALayerDelegate> delegate;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;

@end
