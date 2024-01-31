@interface EDPivotAreaReference : NSObject {
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;

- (void)setCount:(unsigned long long)a0;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void)setSelected:(BOOL)a0;
- (BOOL)selected;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (BOOL)relative;
- (BOOL)byPosition;
- (void)setByPosition:(BOOL)a0;
- (void)setRelative:(BOOL)a0;

@end
