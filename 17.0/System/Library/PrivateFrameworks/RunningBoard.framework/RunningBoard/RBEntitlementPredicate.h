@interface RBEntitlementPredicate : NSObject <NSCopying>

@property (readonly) unsigned long long count;

+ (id)predicateForObject:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)matchesEntitlements:(id)a0;

@end
