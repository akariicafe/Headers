@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (int)scale;
- (id)description;
- (int)operatorType;
- (void)setOperatorType:(int)a0;
- (double)value;
- (void)setValue:(double)a0;
- (void)setScale:(int)a0;
- (double)filterValue;
- (void)setFilterValue:(double)a0;

@end
