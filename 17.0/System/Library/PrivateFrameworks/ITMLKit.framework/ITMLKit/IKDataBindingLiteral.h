@class NSString;

@interface IKDataBindingLiteral : IKDataBindingValue

@property (readonly, nonatomic) NSString *literal;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLiteral:(id)a0;

@end
