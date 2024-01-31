@class NSString, NSArray;

@interface IKDataBindingPropertyPath : IKDataBindingValue

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *accessorSequence;

+ (id)pathStringForAccessorSequence:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithAccessorSequence:(id)a0;
- (id)initWithAccessorSequence:(id)a0;
- (id)propertyPathByCombiningAccessorSequence:(id)a0;
- (id)propertyPathByRemovingFirstAccessor;

@end
