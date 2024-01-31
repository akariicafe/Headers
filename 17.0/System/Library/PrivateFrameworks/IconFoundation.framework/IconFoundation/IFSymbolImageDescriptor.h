@interface IFSymbolImageDescriptor : NSObject <NSCopying>

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;
@property (nonatomic) long long layoutDirection;

- (id)digest;
- (void)setSize:(unsigned long long)a0;
- (void)setWeight:(unsigned long long)a0;
- (id)init;
- (unsigned long long)weight;
- (unsigned long long)size;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
