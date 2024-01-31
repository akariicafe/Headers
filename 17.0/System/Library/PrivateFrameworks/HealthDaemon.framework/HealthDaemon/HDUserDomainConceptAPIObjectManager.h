@interface HDUserDomainConceptAPIObjectManager : NSObject

+ (BOOL)_enumerateConceptDeriveAPIObjectAndAddToResults:(id)a0 mutableResults:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)allAPIObjectsFromUserDomainConceptsWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)generateAPIObjectForUserDomainConcept:(id)a0 apiObjectOut:(id *)a1 profile:(id)a2 error:(id *)a3;

@end
