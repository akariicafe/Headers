@interface TSCEReferenceSetWrapper : NSObject <NSCopying> {
    void *_referenceSet;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) void *referenceSet;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)insertCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)foreachCellRef:(id /* block */)a0;
- (void)forallRefs:(id /* block */)a0;
- (void)foreachRangeRef:(id /* block */)a0;
- (void)foreachSpanningRangeRef:(id /* block */)a0;
- (id)initWithDependencyTracker:(void *)a0;
- (id)initWithReferenceSet:(const void *)a0;
- (void)insertAnyRef:(const struct TSCEAnyRef { unsigned short x0; struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; BOOL x3; id x4; } *)a0;
- (void)insertRefs:(id)a0;
- (void)insertSpanningRangeRef:(const struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } *)a0;
- (void)removeCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;

@end
