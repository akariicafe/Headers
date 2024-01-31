@interface HDProfileAuthorizationEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)anyForBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)fetchStatus:(long long *)a0 profile:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
+ (BOOL)setStatus:(long long)a0 profile:(id)a1 bundleIdentifier:(id)a2 dateModified:(id)a3 error:(id *)a4;
+ (BOOL)setStatusIfNeeded:(long long)a0 profile:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;

- (BOOL)unitTest_getBundleIdentifier:(id *)a0 status:(long long *)a1 dateModified:(id *)a2 forProfile:(id)a3 error:(id *)a4;

@end
