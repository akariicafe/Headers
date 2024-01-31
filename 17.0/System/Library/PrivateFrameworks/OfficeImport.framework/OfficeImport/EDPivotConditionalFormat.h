@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setType:(int)a0;
- (id)init;
- (int)scope;
- (void)setScope:(int)a0;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (int)type;
- (id)pivotAreas;

@end
