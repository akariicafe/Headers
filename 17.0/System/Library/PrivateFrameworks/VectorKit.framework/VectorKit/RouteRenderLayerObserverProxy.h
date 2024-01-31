@class NSString;

@interface RouteRenderLayerObserverProxy : NSObject <VKPolylineGroupOverlayObserver> {
    struct PolylineGroupChangeObserver { void /* function */ **x0; } *_polylineGroupObserver;
    struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> { void *__begin_; void *__end_; struct __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> { void *__value_; } __end_cap_; } _retainedGroups;
    struct set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { struct __tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<VKPolylineGroupOverlay *, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<VKPolylineGroupOverlay *>> { unsigned long long __value_; } __pair3_; } __tree_; } _observedGroupsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)polylineGroup:(id)a0 didRemovePolyline:(id)a1;
- (void)dealloc;
- (void)polylineGroup:(id)a0 didAddPolyline:(id)a1;
- (id).cxx_construct;
- (id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver { void /* function */ **x0; } *)a0;
- (void).cxx_destruct;
- (void)startObserving:(id)a0;
- (void)stopObserving:(id)a0;
- (void)polylineGroup:(id)a0 didSelectPolyline:(id)a1;
- (void)polylineGroup:(id)a0 didFocusPolyline:(id)a1;

@end
