@class TSTCellUIDIterator, TSTCellMap, TSTCell;

@interface TSTCellMapIterator : NSObject {
    TSTCellMap *_cellMap;
    TSTCellUIDIterator *_cellUIDIterator;
    unsigned long long _index;
    BOOL _oneToMany;
    struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _column; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _row; } _currentCellUID;
    TSTCell *_currentCell;
}

- (void).cxx_destruct;
- (id)currentCell;
- (const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)currentCellUID;
- (id)initWithCellMap:(id)a0;
- (struct pair<TSTCell *, TSKUIDStructCoord> { id x0; struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; })nextCellAndCellUID;

@end
