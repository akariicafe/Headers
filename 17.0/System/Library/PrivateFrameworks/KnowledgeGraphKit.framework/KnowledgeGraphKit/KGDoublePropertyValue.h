@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) double value;

- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(double)a0;
- (id)kgPropertyValue;
- (BOOL)isEqual:(id)a0;

@end
