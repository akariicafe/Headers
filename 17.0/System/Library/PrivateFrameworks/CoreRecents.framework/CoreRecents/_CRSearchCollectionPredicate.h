@class NSString, NSArray;

@interface _CRSearchCollectionPredicate : CRSearchPredicate

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSArray *collection;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)initWithKey:(id)a0 collection:(id)a1;
- (id)asNSPredicate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
