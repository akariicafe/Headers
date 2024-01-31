@class NSMutableArray, KGMutableElementIdentifierSet;

@interface KGMutablePropertyValueArray : KGPropertyValueArray

@property (readonly, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) KGMutableElementIdentifierSet *elementIdentifiers;

- (id)init;
- (void)appendValue:(id)a0 forIdentifier:(unsigned long long)a1;

@end
