@class NSString, NSMutableDictionary;

@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver>

@property (retain, nonatomic) NSMutableDictionary *focusRingStateForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateRingForFocusItem:(id)a0 forClient:(id)a1;
+ (void)moveRingToFocusItem:(id)a0;
+ (BOOL)focusRingAvailable;
+ (void)updateRingForFocusItem:(id)a0;
+ (void)removeRingFromFocusItem:(id)a0 forClient:(id)a1;
+ (void)removeRingFromFocusItem:(id)a0;
+ (id)_currentFocusItemForClient:(id)a0;
+ (id)manager;
+ (void)_removeActiveFocusLayers;
+ (Class)shapeLayerClassForItem:(id)a0 client:(id)a1;
+ (void)moveRingToFocusItem:(id)a0 forClient:(id)a1;
+ (void)_updateActiveFocusLayers;

- (void)_addFocusLayer:(id)a0 toView:(id)a1 forItem:(id)a2;
- (id)activeFocusLayersToItemsForClient:(id)a0;
- (void)addFocusRingForItem:(id)a0 forClient:(id)a1;
- (BOOL)_focusItemWantsFocusRing:(id)a0 forClient:(id)a1;
- (void)addParentFocusRingForItem:(id)a0 forClient:(id)a1;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)addSelectedFocusRingForItem:(id)a0 forClient:(id)a1;
- (id)_viewToAddFocusLayerForItem:(id)a0 forClient:(id)a1;
- (long long)_insertionIndexOfFocusLayerForFocusItem:(id)a0;
- (void)_removeActiveFocusLayersForClient:(id)a0;
- (void)addSelectedParentFocusRingForItem:(id)a0 forClient:(id)a1;
- (id)activeFocusLayersForClient:(id)a0;
- (void)_updateFocusLayerFrames;
- (id)_focusRingPathForItem:(id)a0 inView:(id)a1;

@end
