@interface ICSRelationshipTypeParameter : ICSPredefinedValue

+ (id)relationshipParameterFromCode:(unsigned long long)a0;
+ (id)relationshipTypeParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
