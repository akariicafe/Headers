@class CHClassifiableDrawing;

@interface CHDrawingContext : NSObject

@property (readonly, nonatomic) unsigned long long edgeIndex;
@property (readonly, nonatomic) long long numberOfSubstrokes;
@property (readonly, nonatomic) long long numberOfSegments;
@property (readonly, nonatomic) CHClassifiableDrawing *classifiableDrawing;
@property (readonly, nonatomic) struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<long>> { unsigned long long __value_; } __pair3_; } __tree_; } strokeGroup;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEdgeIndex:(unsigned long long)a0 numberOfSubstrokes:(long long)a1 numberOfSegments:(long long)a2 classifiableDrawing:(id)a3 strokeGroup:(struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<long>> { unsigned long long x0; } x2; } x0; })a4;

@end
