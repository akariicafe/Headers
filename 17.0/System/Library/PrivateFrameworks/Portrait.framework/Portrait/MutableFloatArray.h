@interface MutableFloatArray : FloatArray {
    float *_start;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) float *mutableFloats;

- (void)appendFloat:(float)a0;
- (id)initWithCount:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (id)initWithCount:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addConstant:(float)a0;
- (float)floatAtIndex:(unsigned long long)a0;
- (const float *)floats;
- (id)initWithFloat:(float)a0 repeatCount:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (id)initWithZeros:(unsigned long long)a0;
- (id)initWithZeros:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (void)removeFromStart:(unsigned long long)a0;
- (void)setFloat:(float)a0 atIndex:(unsigned long long)a1;
- (void)setFloat:(float)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFloats:(const float *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
