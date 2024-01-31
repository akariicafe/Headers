@protocol CRKClassKitRosterRequirements;

@interface CRKClassKitClassPropertyApplicator : NSObject

@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (id)initWithRequirements:(id)a0;
- (void).cxx_destruct;
- (void)addTrustedUser:(id)a0 toClass:(id)a1;
- (void)addUser:(id)a0 toClass:(id)a1;
- (BOOL)additionsAndRemovalsIntersect:(id)a0;
- (id)applyProperties:(id)a0 toClass:(id)a1 error:(id *)a2;
- (id)identifiersOfUsers:(id)a0;
- (void)removeTrustedUser:(id)a0 fromClass:(id)a1;
- (void)removeUser:(id)a0 fromClass:(id)a1;

@end
