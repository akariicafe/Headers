@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) unsigned long long value;

- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned long long)a0;
- (id)kgPropertyValue;
- (BOOL)isEqual:(id)a0;

@end
