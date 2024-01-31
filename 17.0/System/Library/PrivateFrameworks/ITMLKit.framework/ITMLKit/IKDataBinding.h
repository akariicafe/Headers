@class NSDictionary, NSSet, NSMutableSet;

@interface IKDataBinding : NSObject {
    NSDictionary *_entriesByKey;
    NSMutableSet *_unresolvedKeys;
}

@property (copy, nonatomic) NSDictionary *keyValues;
@property (readonly, nonatomic) NSSet *dataBoundKeys;
@property (readonly, nonatomic) NSSet *unresolvedKeys;

- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)a0;
- (id)keysWithAnyOfAttributes:(unsigned long long)a0;
- (void)markResolvedForKey:(id)a0;
- (void)setNeedsResolutionForAllKeys;
- (void)setNeedsResolutionForKey:(id)a0;
- (id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)a0;

@end
