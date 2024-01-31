@class NSMutableDictionary, NSMutableArray;

@interface TSUHTMLTable : NSObject {
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
}

@property (readonly, nonatomic) unsigned long long lastRowIndex;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long rowClassStride;

+ (id)_attributesStringFromAttributes:(id)a0;
+ (id)_keyForCell:(unsigned long long)a0 :(unsigned long long)a1;
+ (id)htmlTable;

- (id)init;
- (void)dealloc;
- (void)enumerateRowsUsingBlock:(id /* block */)a0;
- (void)addRowWithCellMarkup:(id)a0;
- (void)addRowWithCellText:(id)a0;
- (void)deleteColumnWithTitle:(id)a0;
- (unsigned long long)indexOfColumnWithTitle:(id)a0;
- (id)markup;
- (void)setCellAttributes:(id)a0 rowIndex:(unsigned long long)a1 columnIndex:(unsigned long long)a2;
- (void)setCellMarkup:(id)a0 atRowIndex:(unsigned long long)a1 columnIndex:(unsigned long long)a2;
- (void)setClass:(id)a0 ofColumnIndex:(unsigned long long)a1;
- (void)setColumnClasses:(id)a0;
- (void)setColumnHeaders:(id)a0;
- (void)setRowClass:(id)a0 atRowIndex:(unsigned long long)a1;

@end
