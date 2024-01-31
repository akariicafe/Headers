@class TSTTableInfo, TSKCommandController, TSTCell, NSArray, TSTSearchReference, TSTTextStatisticsTracker, TSWPStorage, TSUPointerKeyDictionary, TSTTableModel, TSTTableSelection;

@interface TSTEditingState : TSPObject <TSWPStorageObserver> {
    TSTCell *mEditingCell;
    struct { unsigned short row; unsigned char column; unsigned char reserved; } mEditingCellID;
    int mEditingMode;
    TSTTableSelection *mSelection;
    TSTTableSelection *mSelectionReflectingEditingState;
    TSUPointerKeyDictionary *mColoredReferences;
    BOOL mCellWasEditedInCurrentSession;
}

@property (readonly, nonatomic) TSKCommandController *commandController;
@property (nonatomic, getter=isDispatchingPreflight) BOOL dispatchingPreflight;
@property (nonatomic, getter=isEndingEditingDueToCancelOperation) BOOL endingEditingDueToCancelOperation;
@property (retain, nonatomic) TSWPStorage *editingStorage;
@property (retain, nonatomic) TSTCell *editingCell;
@property (nonatomic) struct { unsigned short x0; unsigned char x1; unsigned char x2; } editingCellID;
@property (readonly, nonatomic) struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; } editingCellRange;
@property (nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) struct { unsigned short row; unsigned char column; unsigned char reserved; } lastEditingCellID;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) int editingMode;
@property (copy, nonatomic) TSTTableSelection *selection;
@property (nonatomic) unsigned char lastColumnHitByTap;
@property (nonatomic) BOOL cellWasEditedInCurrentSession;
@property (nonatomic) BOOL editingCellInProxy;
@property (retain, nonatomic) TSTSearchReference *searchReference;
@property (nonatomic) TSTTextStatisticsTracker *tracker;
@property (readonly, nonatomic) int previousEditingMode;
@property (readonly, nonatomic) NSArray *coloredReferences;

- (void)dealloc;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)changeEditingMode:(int)a0;
- (void)didEndEditingDueToCancelOperation;
- (id)initForPasteboardFromSourceInfo:(id)a0 stylesheet:(id)a1;
- (id)initWithTableInfo:(id)a0;
- (void)p_performRichTextStorageDOLC:(id)a0 newStorage:(id)a1;
- (void)p_registerStorageObserver;
- (BOOL)p_shouldSetCellPostFlight;
- (void)p_unregisterStorageObserver;
- (void)performEndRichTextEditing;
- (id)prepareEditingStorageToEditCell:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (void)reloadValue;
- (void)reloadValueFromFocusedCell;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(int)a3;
- (id)storageForCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (void)willEndEditingDueToCancelOperation;

@end
