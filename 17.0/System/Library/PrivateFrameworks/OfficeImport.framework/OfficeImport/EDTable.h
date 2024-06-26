@class EDResources, NSString, EDCollection, EDReference;

@interface EDTable : NSObject {
    EDResources *mResources;
    unsigned long long mStyleIndex;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    unsigned long long mHeaderRowBorderDxfIndex;
    unsigned long long mTotalsRowBorderDxfIndex;
    unsigned long long mDataAreaBorderDxfIndex;
    unsigned long long mTableBorderDxfIndex;
    NSString *mName;
    NSString *mDisplayName;
    EDReference *mTableRange;
    NSString *mStyleName;
    unsigned long long mHeaderRowCount;
    unsigned long long mTotalsRowCount;
    BOOL mShowFirstColumn;
    BOOL mShowLastColumn;
    BOOL mShowRowStripes;
    BOOL mShowColumnStripes;
    EDCollection *mTableColumns;
    EDCollection *mColumnFilters;
}

+ (id)tableWithResources:(id)a0;

- (void)setName:(id)a0;
- (id)description;
- (void)setStyle:(id)a0;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)style;
- (id)displayName;
- (id)styleName;
- (id)initWithResources:(id)a0;
- (void)setStyleIndex:(unsigned long long)a0;
- (unsigned long long)styleIndex;
- (id)tableColumns;
- (void)setDataAreaDxf:(id)a0;
- (BOOL)showFirstColumn;
- (id)columnFilters;
- (id)dataAreaBorderDxf;
- (unsigned long long)dataAreaBorderDxfIndex;
- (id)dataAreaDxf;
- (unsigned long long)dataAreaDxfIndex;
- (id)headerRowBorderDxf;
- (unsigned long long)headerRowBorderDxfIndex;
- (unsigned long long)headerRowCount;
- (id)headerRowDxf;
- (unsigned long long)headerRowDxfIndex;
- (void)setDataAreaBorderDxf:(id)a0;
- (void)setDataAreaBorderDxfIndex:(unsigned long long)a0;
- (void)setDataAreaDxfIndex:(unsigned long long)a0;
- (void)setHeaderRowBorderDxf:(id)a0;
- (void)setHeaderRowBorderDxfIndex:(unsigned long long)a0;
- (void)setHeaderRowCount:(unsigned long long)a0;
- (void)setHeaderRowDxf:(id)a0;
- (void)setHeaderRowDxfIndex:(unsigned long long)a0;
- (void)setShowColumnStripes:(BOOL)a0;
- (void)setShowFirstColumn:(BOOL)a0;
- (void)setShowLastColumn:(BOOL)a0;
- (void)setShowRowStripes:(BOOL)a0;
- (void)setStyleName:(id)a0;
- (void)setTableBorderDxf:(id)a0;
- (void)setTableBorderDxfIndex:(unsigned long long)a0;
- (void)setTableRange:(id)a0;
- (void)setTotalsRowBorderDxf:(id)a0;
- (void)setTotalsRowBorderDxfIndex:(unsigned long long)a0;
- (void)setTotalsRowCount:(unsigned long long)a0;
- (void)setTotalsRowDxf:(id)a0;
- (void)setTotalsRowDxfIndex:(unsigned long long)a0;
- (BOOL)showColumnStripes;
- (BOOL)showLastColumn;
- (BOOL)showRowStripes;
- (id)tableBorderDxf;
- (unsigned long long)tableBorderDxfIndex;
- (id)tableRange;
- (id)totalsRowBorderDxf;
- (unsigned long long)totalsRowBorderDxfIndex;
- (unsigned long long)totalsRowCount;
- (id)totalsRowDxf;
- (unsigned long long)totalsRowDxfIndex;

@end
