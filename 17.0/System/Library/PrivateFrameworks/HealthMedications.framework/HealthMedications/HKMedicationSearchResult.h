@class HKConcept, NSArray, HKIntegerSet, NSNumber;

@interface HKMedicationSearchResult : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_hasWalkedGraph;
    HKConcept *_lock_tradeNameProduct;
    NSArray *_lock_clinicalProducts;
    NSArray *_lock_routedDoseFormProducts;
    NSArray *_lock_ingredientProducts;
    long long _lock_traversedNodeCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKConcept *tradeNameProduct;
@property (readonly, copy, nonatomic) NSArray *clinicalProducts;
@property (readonly, copy, nonatomic) NSArray *routedDoseFormProducts;
@property (readonly, copy, nonatomic) NSArray *ingredientProducts;
@property (readonly, nonatomic) long long debug_traversedNodeCount;
@property (readonly, copy, nonatomic) NSNumber *seedHgId;
@property (readonly, copy, nonatomic) HKConcept *specificProduct;
@property (readonly, copy, nonatomic) HKIntegerSet *traversedRelationships;
@property (readonly, nonatomic) long long traversedDepth;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_lock_walkGraph;
- (id)_lock_clinicalProducts;
- (long long)_lock_debug_traversedNodeCount;
- (id)_lock_ingredientProducts;
- (id)_lock_routedDoseFormProducts;
- (id)_lock_tradeNameProduct;
- (void)_lock_walkGraphIfNecessary;
- (void)_visit:(id)a0 ofRoot:(id)a1 withMaxDepth:(long long)a2 handler:(id /* block */)a3;
- (id)initWithSeedHgId:(id)a0 specificProduct:(id)a1 traversedRelationships:(id)a2 traversedDepth:(long long)a3;

@end
