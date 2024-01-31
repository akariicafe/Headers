@class NSString, TSKSelection, TSTCellSelection, TSTCellRegion;

@interface TSTArchivedCellSelection : TSPObject <TSKArchivedSelection> {
    TSTCellSelection *_cellSelection;
    BOOL _isLegacyBasedIDSelection;
    struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _legacyAnchorCellID;
    struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _legacyCursorCellID;
    TSTCellRegion *_legacyCellRegion;
    TSTCellRegion *_legacyBaseCellRegion;
    long long _selectionType;
}

@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)selectionWithParent:(id)a0;

@end
