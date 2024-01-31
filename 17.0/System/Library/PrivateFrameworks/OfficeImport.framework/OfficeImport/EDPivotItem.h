@class EDCollection;

@interface EDPivotItem : NSObject {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (void)setType:(int)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (int)type;
- (id)itemIndexes;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)a0;

@end
