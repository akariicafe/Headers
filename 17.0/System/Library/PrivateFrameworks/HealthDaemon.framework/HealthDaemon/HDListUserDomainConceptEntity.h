@interface HDListUserDomainConceptEntity : HDUserDomainConceptEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (id)privateDataEntities;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)a0 propertyCollection:(id)a1;
+ (Class)userDomainConceptClass;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (id)predicateMatchingSemanticIdentifier:(id)a0;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;

@end
