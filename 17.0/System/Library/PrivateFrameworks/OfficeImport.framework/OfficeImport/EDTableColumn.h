@class EDString, EDResources;

@interface EDTableColumn : NSObject {
    EDResources *mResources;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)a0;

- (id)uniqueName;
- (void)setUniqueName:(id)a0;
- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)initWithResources:(id)a0;
- (void)setDataAreaDxf:(id)a0;
- (id)dataAreaDxf;
- (unsigned long long)dataAreaDxfIndex;
- (id)headerRowDxf;
- (unsigned long long)headerRowDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned long long)a0;
- (void)setHeaderRowDxf:(id)a0;
- (void)setHeaderRowDxfIndex:(unsigned long long)a0;
- (void)setTotalsRowDxf:(id)a0;
- (void)setTotalsRowDxfIndex:(unsigned long long)a0;
- (void)setTotalsRowLabel:(id)a0;
- (id)totalsRowDxf;
- (unsigned long long)totalsRowDxfIndex;
- (id)totalsRowLabel;

@end
