@class NSString, UIViewController, CALayer;

@interface DYiOSPlaybackEngine : DYPlaybackEngine <DYLayerManager> {
    CALayer *_hostLayer;
    struct map<CALayer *__unsafe_unretained, bool, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, bool>>> { struct __tree<std::__value_type<CALayer *__unsafe_unretained, bool>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, bool>, std::less<CALayer *__unsafe_unretained>>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, bool>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, bool>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, bool>, std::less<CALayer *__unsafe_unretained>>> { unsigned long long __value_; } __pair3_; } __tree_; } _hostLayerSublayersVisibilityMap;
    struct map<unsigned long long, CALayer *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, CALayer *>>> { struct __tree<std::__value_type<unsigned long long, CALayer *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, CALayer *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, CALayer *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, CALayer *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, CALayer *>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _layerMap;
    struct map<CALayer *, bool, std::less<CALayer *>, std::allocator<std::pair<CALayer *const, bool>>> { struct __tree<std::__value_type<CALayer *, bool>, std::__map_value_compare<CALayer *, std::__value_type<CALayer *, bool>, std::less<CALayer *>>, std::allocator<std::__value_type<CALayer *, bool>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *, bool>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *, std::__value_type<CALayer *, bool>, std::less<CALayer *>>> { unsigned long long __value_; } __pair3_; } __tree_; } _coreAnimationLayerMap;
    struct CGPoint { double x; double y; } _screenCenter;
    CALayer *_topLayer;
    long long _interfaceOrientation;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_convertToCATransform3D:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;
+ (struct CGPoint { double x0; double x1; })_convertToCGPoint:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setInterfaceOrientation:(int)a0;
- (id)newLayer;
- (id)initWithCaptureStore:(id)a0;
- (id)currentTopLayer;
- (void)applyLayersVisibility;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForCurrentInterfaceOrientation;
- (id)createLayerWithID:(unsigned long long)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentsScale:(double)a2 properties:(id)a3 isCoreAnimationSurface:(BOOL)a4;
- (double)defaultContentsScale;
- (void)deleteLayer:(unsigned long long)a0;
- (id)layerForID:(unsigned long long)a0;
- (void)prepareLayerForPresent:(id)a0;
- (void)resetLayersVisibility;
- (void)setAnchorPoint:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0 forLayerID:(unsigned long long)a1;
- (void)setPosition:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0 forLayerID:(unsigned long long)a1;
- (void)setTransform:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0 forLayerID:(unsigned long long)a1 withScreenToLayerScale:(const void *)a2;
- (void)updateLayer:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentsScale:(double)a2 properties:(id)a3;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_applyInterfaceOrientationToTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)_setupLayer:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentsScale:(double)a2 properties:(id)a3 isCoreAnimationSurface:(BOOL)a4;
- (id)initWithCaptureStore:(id)a0 shouldCreateViewController:(BOOL)a1;
- (BOOL)layerHasSameProperties:(id)a0 layer:(id)a1;
- (void)setProperties:(id)a0 forLayer:(id)a1;

@end
