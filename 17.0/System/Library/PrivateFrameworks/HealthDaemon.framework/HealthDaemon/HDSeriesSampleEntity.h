@class NSString;

@interface HDSeriesSampleEntity : HDSampleEntity <_HDSeriesFreezeJournalEntrySeries, HDSeriesEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)seriesSampleWithID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)deleteSeriesWithID:(id)a0 deleteSeriesData:(BOOL)a1 insertDeletedObject:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)migrateDataToSQLFromStore:(const void *)a0 database:(id)a1 error:(id *)a2;
+ (id)freezeSeriesWithIdentifier:(id)a0 metadata:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)migrateDataFromDataStore:(const void *)a0 to:(void *)a1 database:(id)a2 recoveryAnalytics:(id)a3 error:(id *)a4;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (BOOL)replaceObjectID:(id)a0 replacementObjectID:(id)a1 deleteOriginalSeriesData:(BOOL)a2 insertDeletedObject:(BOOL)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (void)updateInsertionEra;
+ (id)additionalPredicateForEnumeration;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;

@end
