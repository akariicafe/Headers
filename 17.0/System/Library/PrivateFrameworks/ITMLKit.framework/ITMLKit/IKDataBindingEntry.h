@class NSString, IKDataBindingValue;

@interface IKDataBindingEntry : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) IKDataBindingValue *value;
@property (readonly, nonatomic) unsigned long long attributes;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1 attributes:(unsigned long long)a2;

@end
