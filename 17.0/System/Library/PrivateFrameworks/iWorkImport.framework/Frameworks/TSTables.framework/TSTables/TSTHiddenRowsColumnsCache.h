@class NSIndexSet, NSMutableIndexSet, TSTHiddenStateIndexSet, NSString;

@interface TSTHiddenRowsColumnsCache : NSObject <TSTTableHiddenRowColumnProviding>

@property (retain, nonatomic) TSTHiddenStateIndexSet *rowsVisible;
@property (retain, nonatomic) TSTHiddenStateIndexSet *rowsUserVisible;
@property (retain, nonatomic) NSMutableIndexSet *rowsInvalid;
@property (nonatomic) unsigned long long rowMarkIndex;
@property (retain, nonatomic) TSTHiddenStateIndexSet *columnsVisible;
@property (retain, nonatomic) NSMutableIndexSet *columnsInvalid;
@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;
@property (readonly, nonatomic) NSIndexSet *userVisibleRowIndices;
@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)validate:(id)a0;
- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })visibleCellOffsetBy:(struct TSUColumnRowOffset { int x0; int x1; })a0 fromCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (BOOL)anyRowsUserHiddenInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)isRowUserHidden:(unsigned int)a0;
- (unsigned int)numberOfVisibleRowsFromHeader:(unsigned int)a0;
- (unsigned short)previousNthVisibleColumn:(unsigned int)a0 fromColumnIndex:(unsigned short)a1;
- (unsigned int)previousNthVisibleRow:(unsigned int)a0 fromRowIndex:(unsigned int)a1;
- (void)validateChangeDescriptors:(id)a0;
- (unsigned int)numberOfVisibleRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)enumerateVisibleColumnIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (BOOL)hasHiddenColumnAtIndex:(unsigned short)a0;
- (BOOL)hasHiddenRowAtIndex:(unsigned int)a0;
- (unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)a0;
- (unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)a0;
- (unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)a0;
- (unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)a0;
- (unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)a0;
- (unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)a0;
- (unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)a0;
- (unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)a0;
- (unsigned int)nonUserHiddenRowAfterAndIncludingRow:(unsigned int)a0;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (unsigned int)numberOfVisibleColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (unsigned int)numberOfVisibleRowsFromStartRowIndex:(unsigned long long)a0 toEndRowIndex:(unsigned int)a1;

@end
