@class NSString;

@interface EDPivotDataField : NSObject {
    long long mBaseField;
    unsigned long long mBaseItem;
    unsigned long long mFieldId;
    unsigned long long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;

- (id)init;
- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (unsigned long long)baseItem;
- (void)setBaseItem:(unsigned long long)a0;
- (long long)baseField;
- (unsigned long long)numFmtId;
- (void)setBaseField:(long long)a0;
- (void)setNumFmtId:(unsigned long long)a0;
- (void)setShowDataAs:(int)a0;
- (int)showDataAs;

@end
