@interface FloatArray : NSObject <NSCopying, NSMutableCopying> {
    float *_buffer;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const float *floats;

- (id)init;
- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)asArray;
- (id)initWithCount:(unsigned long long)a0;
- (id)asData;
- (id)initWithArray:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)mean;
- (id)addingConstant:(float)a0;
- (unsigned long long)argMinimum;
- (float)floatAtIndex:(unsigned long long)a0;
- (id)initWithFloat:(float)a0 repeatCount:(unsigned long long)a1;
- (id)initWithFloatArray:(id)a0;
- (id)initWithFloats:(const float *)a0 count:(unsigned long long)a1;
- (id)initWithZeros:(unsigned long long)a0;
- (BOOL)isEqualToFloatArray:(id)a0;
- (BOOL)isEqualToFloatArray:(id)a0 tolerance:(float)a1;
- (float)maximumDifferenceWithFloatArray:(id)a0;
- (id)subtracting:(id)a0;

@end
