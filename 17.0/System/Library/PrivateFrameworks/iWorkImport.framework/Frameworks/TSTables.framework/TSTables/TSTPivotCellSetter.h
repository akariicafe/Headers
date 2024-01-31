@class NSObject, TSULocale, TSCEBulkCellChangeMinion, NSString, TSTTableInfo, TSTCell;
@protocol OS_dispatch_queue;

@interface TSTPivotCellSetter : NSObject {
    TSTTableInfo *_pivotTable;
    TSTCell *_cell;
    TSCEBulkCellChangeMinion *_minion;
    BOOL _preservingStyles;
    NSObject<OS_dispatch_queue> *_workerQueue;
    TSULocale *_documentLocale;
    NSString *_blankString;
}

@property (readonly, nonatomic) BOOL madeChange;

- (void).cxx_destruct;
- (void)applyCellValue:(id)a0 atUidCoord:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a1 appendTotalForPivotsFlag:(BOOL)a2;
- (void)applyFormula:(id)a0 atUidCoord:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (void)blockUntilCompleted;
- (id)initWithPivotTable:(id)a0 minion:(id)a1 preservingStyles:(BOOL)a2;
- (void)setStringValue:(id)a0 atUidCoord:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a1;

@end
