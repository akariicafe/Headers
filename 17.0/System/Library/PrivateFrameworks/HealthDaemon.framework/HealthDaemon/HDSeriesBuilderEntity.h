@interface HDSeriesBuilderEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)freezeSeriesWithIdentifier:(id)a0 metadata:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)discardBuilderWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)createPersistentEntityForBuilderIdentifier:(id)a0 seriesType:(id)a1 state:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)persistentEntityForBuilderIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (Class)seriesEntityClass;

- (BOOL)insertMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)metadataWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setBuilderState:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (long long)stateWithTransaction:(id)a0 error:(id *)a1;

@end
