@interface VKPolylineOverlayRenderRegion : NSObject {
    struct MultiRectRegion { struct set<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> { struct __tree<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<gm::Box<double, 2>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, md::MultiRectSetCompare> { unsigned long long __value_; } __pair3_; } __tree_; } _rects; struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _enclosingRect; } _snappingRegion;
}

@property (readonly, nonatomic) struct set<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>> { struct __tree<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<md::RouteLineData>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::shared_ptr<md::RouteLineData>>> { unsigned long long __value_; } __pair3_; } __tree_; } routeLineDatas;
@property (readonly, nonatomic) struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } visibleRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initForVisibleRect:(const void *)a0 snappingRegion:(const void *)a1 routeLineDatas:(const void *)a2;
- (BOOL)isEquivalentToNewRegion:(id)a0;
- (const void *)snappingRegion;

@end
