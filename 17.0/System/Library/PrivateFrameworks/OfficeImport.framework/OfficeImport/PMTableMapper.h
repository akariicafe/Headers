@class CMDrawableStyle, CMTableGridInfo, OADOrientedBounds, OADTable;

@interface PMTableMapper : CMMapper {
    OADTable *mTable;
    CMDrawableStyle *mStyle;
    CMTableGridInfo *mGrid;
    OADOrientedBounds *mBounds;
}

- (id)grid;
- (unsigned long long)rowCount;
- (void).cxx_destruct;
- (id)cellStyle;
- (id)initWithOadTable:(id)a0 bounds:(id)a1 parent:(id)a2;
- (float)columnWidthAtIndex:(unsigned long long)a0 state:(id)a1;
- (id)defaultCellFillForRow:(unsigned long long)a0 withState:(id)a1;
- (id)defaultCellFillWithState:(id)a0;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapColumnGridAt:(id)a0 withState:(id)a1;
- (void)mapTablePropertiesWithState:(id)a0;
- (id)tableBorderStyle;

@end
