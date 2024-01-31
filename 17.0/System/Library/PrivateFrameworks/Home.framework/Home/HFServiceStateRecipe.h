@class NSSet, NAIdentity, NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceStateRecipe : NSObject <NAIdentifiable, NSCopying>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) id<HFServiceTreeMatching> predicate;
@property (readonly, nonatomic) NSSet *characteristicRecipes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPredicate:(id)a0 characteristicRecipes:(id)a1;
- (id)matchResultForServices:(id)a0;

@end
