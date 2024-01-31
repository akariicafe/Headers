@class TSSStyle;

@interface TSTTableDataStyle : TSTTableDataObject {
    TSSStyle *mStyle;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithStyle:(id)a0;

@end
