@class NSString;

@interface KGStringPropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSString *value;

- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)kgPropertyValue;
- (BOOL)isEqual:(id)a0;

@end
