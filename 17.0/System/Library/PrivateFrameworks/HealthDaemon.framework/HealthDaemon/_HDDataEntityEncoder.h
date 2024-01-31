@class HDDataProvenanceCache, HDMetadataValueStatement;

@interface _HDDataEntityEncoder : HDEntityEncoder {
    HDMetadataValueStatement *_metadataValueStatement;
    HDDataProvenanceCache *_dataProvenanceCache;
    id /* block */ _metadataKeyFilter;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
}

- (void)finish;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)objectForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)initWithHealthEntityClass:(Class)a0 profile:(id)a1 transaction:(id)a2 purpose:(long long)a3 encodingOptions:(id)a4 authorizationFilter:(id /* block */)a5;
- (void).cxx_destruct;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
