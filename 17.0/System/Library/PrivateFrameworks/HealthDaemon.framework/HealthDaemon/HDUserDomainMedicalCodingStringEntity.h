@interface HDUserDomainMedicalCodingStringEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)persistentIDForString:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)stringForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (BOOL)enumerateMedicalCodingStringsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;

@end
