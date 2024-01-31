@interface HDClinicalAuthorizationSessionEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)joinClausesForProperty:(id)a0;
+ (id)checkConstraints;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
