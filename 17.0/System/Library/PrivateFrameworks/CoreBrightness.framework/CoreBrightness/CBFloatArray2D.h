@interface CBFloatArray2D : CBFloatArray {
    unsigned long long _cols;
    unsigned long long _rows;
}

- (float)getCol:(unsigned long long)a0 andRow:(unsigned long long)a1;
- (id)initWithValues:(float *)a0 andCountCols:(unsigned long long)a1 andRows:(unsigned long long)a2;

@end
