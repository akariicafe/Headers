@interface SAClassRegistry : NSObject

+ (void)initialize;
+ (Class)classForAceClassName:(id)a0 inGroupWithIdentifier:(id)a1;
+ (void)registerAcronym:(id)a0 forGroupWithIdentifier:(id)a1;
+ (void)registerClass:(Class)a0 forAceClassName:(id)a1 inGroupWithIdentifier:(id)a2;
+ (id)sharedClassRegistry;

- (Class)classForAceClassWithName:(id)a0 inGroupWithIdentifier:(id)a1;
- (void)registerClass:(Class)a0 forAceClassWithName:(id)a1 inGroupWithIdentifier:(id)a2;

@end
