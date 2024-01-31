@class TSTConditionalStyleSet;

@interface TSTTableDataConditionalStyleSet : TSTTableDataObject {
    TSTConditionalStyleSet *mConditionalStyleSet;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithConditionalStyleSet:(id)a0;

@end
