@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)initWithText:(id)a0;
- (id)properties;
- (unsigned long long)rowCount;
- (id)description;
- (void).cxx_destruct;
- (int)nestingLevel;
- (id)rowAt:(unsigned long long)a0;
- (void)clearProperties;
- (id)insertRowAtIndex:(unsigned long long)a0;
- (void)clearRows;
- (id)newCellIterator;
- (id)addRow;
- (int)blockType;
- (id)cellIterator;
- (id)newRowIterator;
- (id)newRunIterator;
- (id)rowIterator;
- (id)runIterator;

@end
