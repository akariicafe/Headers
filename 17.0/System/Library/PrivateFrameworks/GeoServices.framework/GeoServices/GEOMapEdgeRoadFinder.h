@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder {
    struct unordered_set<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> { struct __hash_table<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *>, std::allocator<std::__hash_node<GEORoadEdge *, void *>>> { struct __hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<GEORoadEdge *>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<GEORoadEdge *>> { float __value_; } __p3_; } __table_; } _roadsConsidered;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildersInTile:(id)a0 localPoint:(const void *)a1 localRadiusSqr:(float)a2 localSearch:(const void *)a3 handler:(id /* block */)a4;
- (BOOL)_checkEdgeForDuplicates:(const void *)a0;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;

@end
