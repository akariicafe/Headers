@class TSTAccumulator, TSTGroupNode, TSTAggregator, NSMutableArray;

@interface TSTAggNode : NSObject {
    struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>> { unsigned long long __value_; } __pair3_; } __tree_; } _rowsPerColumn; } _childrenCoordSet;
}

@property (readonly, nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } formulaCoord;
@property (retain, nonatomic) TSTAccumulator *accumulator;
@property (weak, nonatomic) TSTGroupNode *groupNode;
@property (readonly, weak, nonatomic) TSTAggregator *aggregator;
@property (readonly, nonatomic) unsigned char groupLevel;
@property (retain, nonatomic) NSMutableArray *children;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)encodeToArchive:(void *)a0;
- (void)unpackAfterUnarchiveForGroupBy:(id)a0;
- (void)addChild:(id)a0 skipWillModify:(BOOL)a1;
- (void)clearAggFormulas:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)descriptionWithGroupBy:(id)a0;
- (void)enumerateDirectChildren:(id /* block */)a0;
- (id)initWithArchive:(const void *)a0 aggregator:(id)a1;
- (id)initWithFormulaCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 groupNode:(id)a1 aggregator:(id)a2;
- (void)removeChild:(id)a0 skipWillModify:(BOOL)a1;
- (void)upgradeForNewAggregateTypes:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
