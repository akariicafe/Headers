@interface TSCEValueGrid : NSObject <NSCopying> {
    struct TSCEBitGrid { struct vector<TSCEBitGridTile *, std::allocator<TSCEBitGridTile *>> { struct TSCEBitGridTile **__begin_; struct TSCEBitGridTile **__end_; struct __compressed_pair<TSCEBitGridTile **, std::allocator<TSCEBitGridTile *>> { struct TSCEBitGridTile **__value_; } __end_cap_; } _tiles; unsigned long long _count; unsigned long long _lastTileFoundAtIndex; } _coords;
    struct TSCEGridCoord { unsigned int column; unsigned int row; } _topLeftCoord;
    struct TSCEGridDimensions { unsigned int width; unsigned int height; } _dimensions;
    struct unordered_map<TSCEGridCoord, TSCEValue, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, std::allocator<std::pair<const TSCEGridCoord, TSCEValue>>> { struct __hash_table<std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>>, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>>, std::allocator<std::__hash_value_type<TSCEGridCoord, TSCEValue>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>>> { float __value_; } __p3_; } __table_; } _valueForCoord;
    struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *_populatedColumns;
    struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *_populatedRows;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long area;
@property (readonly, nonatomic) unsigned int numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned int numberOfPopulatedColumns;
@property (readonly, nonatomic) unsigned int numberOfPopulatedRows;
@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, nonatomic) struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } dimensions;
@property (readonly, nonatomic) struct TSCEGridCoord { unsigned int x0; unsigned int x1; } topLeftCoord;

- (struct vector<TSCEValue, std::allocator<TSCEValue>> { struct TSCEValue *x0; struct TSCEValue *x1; struct __compressed_pair<TSCEValue *, std::allocator<TSCEValue>> { struct TSCEValue *x0; } x2; })allValues;
- (id)init;
- (void)dealloc;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })firstValue;
- (struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; })populatedRows;
- (void)enumerateValuesForColumn:(unsigned short)a0 usingBlock:(id /* block */)a1;
- (void)enumerateValuesForRow:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; })populatedColumns;
- (id)populatedSliceByIndex:(unsigned long long)a0 byRow:(BOOL)a1;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })valueAt1DIndex:(unsigned long long)a0;
- (id)initWithValueVector:(const void *)a0 dimensions:(const struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } *)a1;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })valueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 accessContext:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;
- (void)clearValueAtColumn:(unsigned int)a0 row:(unsigned int)a1;
- (void)clearValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (void)compressToZeroBased;
- (void)expandToIncludeCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (id)flattenedGridNoThrow:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a0;
- (BOOL)hasValueAtColumn:(unsigned int)a0 row:(unsigned int)a1;
- (BOOL)hasValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (id)initWithColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithValueVector:(const void *)a0;
- (id)intersectionWithCellRect:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)setEmptyValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (void)setValue:(const struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; } *)a0 atCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a1;
- (id)subGridAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 width:(int)a1 height:(int)a2;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })valueAtColumn:(unsigned int)a0 row:(unsigned int)a1;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })valueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })valueAtIndex:(unsigned long long)a0 accessContext:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })valueAtIndexNoThrow:(unsigned long long)a0 accessContext:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;

@end
