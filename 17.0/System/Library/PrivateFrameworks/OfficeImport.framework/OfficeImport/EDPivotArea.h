@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {
    BOOL mGrandCol;
    BOOL mGrandRow;
    BOOL mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (void)setType:(int)a0;
- (id)init;
- (void)setOffset:(id)a0;
- (id)offset;
- (id)description;
- (void).cxx_destruct;
- (BOOL)outline;
- (int)type;
- (void)setOutline:(BOOL)a0;
- (id)references;
- (BOOL)grandCol;
- (BOOL)grandRow;
- (void)setGrandCol:(BOOL)a0;
- (void)setGrandRow:(BOOL)a0;

@end
