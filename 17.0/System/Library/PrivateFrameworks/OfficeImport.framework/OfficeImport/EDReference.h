@interface EDReference : NSObject <NSCopying> {
    struct EDAreaReference { int firstRow; int firstColumn; int lastRow; int lastColumn; } mAreaReference;
}

+ (id)reference;
+ (id)referenceWithAreaReference:(struct EDAreaReference { int x0; int x1; int x2; int x3; } *)a0;
+ (id)referenceWithFirstRow:(int)a0 lastRow:(int)a1 firstColumn:(int)a2 lastColumn:(int)a3;
+ (id)referenceWithReference:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReference:(id)a0;
- (int)firstColumn;
- (BOOL)isEqualToReference:(id)a0;
- (BOOL)isCellReference;
- (int)lastRow;
- (void)setFirstColumn:(int)a0;
- (struct EDAreaReference { int x0; int x1; int x2; int x3; })areaReference;
- (BOOL)containsRow:(int)a0 column:(int)a1;
- (unsigned long long)countOfCellsBeingReferenced;
- (int)firstRow;
- (BOOL)fullyAdjacentToReference:(id)a0;
- (id)initWithAreaReference:(struct EDAreaReference { int x0; int x1; int x2; int x3; } *)a0;
- (id)initWithFirstRow:(int)a0 lastRow:(int)a1 firstColumn:(int)a2 lastColumn:(int)a3;
- (BOOL)isColumnReference;
- (BOOL)isRowReference;
- (BOOL)isValidAreaReference;
- (BOOL)isValidCellReference;
- (int)lastColumn;
- (void)setFirstRow:(int)a0;
- (void)setLastColumn:(int)a0;
- (void)setLastRow:(int)a0;
- (void)unionWithFirstRow:(int)a0 lastRow:(int)a1 firstColumn:(int)a2 lastColumn:(int)a3;
- (void)unionWithReference:(id)a0;
- (void)unionWithRow:(int)a0 column:(int)a1;

@end
