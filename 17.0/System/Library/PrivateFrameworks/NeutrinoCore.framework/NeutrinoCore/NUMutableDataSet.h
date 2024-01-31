@interface NUMutableDataSet : NUDataSet

@property (readonly, nonatomic) long long capacity;

- (void *)_data;
- (void)addValue:(double)a0;
- (id)initWithCapacity:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendDataSet:(id)a0;

@end
