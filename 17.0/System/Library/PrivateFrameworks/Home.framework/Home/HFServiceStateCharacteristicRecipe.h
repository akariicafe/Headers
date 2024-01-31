@class NSString, NAIdentity;
@protocol HFServiceTreeMatching;

@interface HFServiceStateCharacteristicRecipe : NSObject <NAIdentifiable, NSCopying>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) id<HFServiceTreeMatching> servicePredicate;
@property (readonly, nonatomic, getter=isRequired) BOOL required;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recipeForRootServiceCharacteristicType:(id)a0 required:(BOOL)a1;
+ (id)recipesForRootServiceCharacteristicTypes:(id)a0 required:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCharacteristicType:(id)a0 servicePredicate:(id)a1 required:(BOOL)a2;
- (id)matchResultForServices:(id)a0;

@end
