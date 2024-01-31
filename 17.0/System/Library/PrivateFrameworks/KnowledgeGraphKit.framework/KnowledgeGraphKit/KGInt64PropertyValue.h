@interface KGInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) long long value;

- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(long long)a0;
- (id)kgPropertyValue;
- (BOOL)isEqual:(id)a0;

@end
