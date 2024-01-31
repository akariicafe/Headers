@class TSTMasterLayout, TSTCell, TSTTableModel;

@interface TSTLayoutCellIterator : TSTCellIterator {
    struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } mLayoutRange;
    struct { unsigned short row; unsigned char column; unsigned char reserved; } mLayoutCellID;
    TSTCell *mLayoutCell;
    struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } mPreviousCellID; struct { unsigned short row; unsigned char column; unsigned char reserved; } mCellID; TSTCell *mCell; struct TSTCellStorage *mCellRef; struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } mMergeRange; BOOL mStyleOnly; BOOL mCommentStorageOnly; BOOL mHidden; BOOL mHiddenRow; BOOL mHiddenColumn; } mModelIteratorData;
    BOOL mQueriedModel;
    BOOL mModelIteratorHasCell;
    unsigned short mNumberOfLayoutColumns;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfRows;
}

@property (readonly, nonatomic) TSTMasterLayout *masterLayout;
@property (readonly, nonatomic) TSTTableModel *tableModel;

- (void)dealloc;
- (id)initWithLayout:(id)a0;
- (id)initWithLayout:(id)a0 range:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
- (id)initWithLayout:(id)a0 range:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1 flags:(unsigned long long)a2;
- (id)initWithMasterLayout:(id)a0;
- (id)initWithMasterLayout:(id)a0 range:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
- (id)initWithMasterLayout:(id)a0 range:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1 flags:(unsigned long long)a2;

@end
