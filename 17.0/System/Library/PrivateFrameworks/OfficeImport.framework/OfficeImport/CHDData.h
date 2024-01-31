@class EDResources, CHDDataValuesCollection, CHDFormula;

@interface CHDData : NSObject {
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    unsigned long long mContentFormatId;
    unsigned long long mDataValueIndexCount;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(unsigned long long)a0 resources:(id)a1;
+ (id)dataWithResources:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithResources:(id)a0;
- (unsigned long long)contentFormatId;
- (id)formula;
- (unsigned long long)averageDataPointDecimalCount;
- (id)contentFormat;
- (unsigned long long)countOfCellsBeingReferenced;
- (unsigned long long)dataValueIndexCount;
- (id)dataValues;
- (id)firstValueContentFormatWithWorkbook:(id)a0;
- (id)initWithDataPointCount:(unsigned long long)a0 resources:(id)a1;
- (struct CGPoint { double x0; double x1; })minMaxValues;
- (void)setContentFormat:(id)a0;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setDataValueIndexCount:(unsigned long long)a0;
- (void)setFormula:(id)a0 chart:(id)a1;

@end
