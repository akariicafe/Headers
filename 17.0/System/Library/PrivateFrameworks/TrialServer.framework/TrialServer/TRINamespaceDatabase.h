@class TRIDatabase;

@interface TRINamespaceDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (id)init;
- (BOOL)addOrUpdateDynamicNamespaceWithName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 teamId:(id)a3 appContainerId:(id)a4 appContainerType:(long long)a5 cloudKitContainer:(int)a6;
- (struct { unsigned long long x0; })setFetched:(BOOL)a0 forDynamicNamespaceName:(id)a1;
- (BOOL)enumerateDynamicNamespaceRecordsWithBlock:(id /* block */)a0;
- (struct { unsigned long long x0; })removeDynamicNamespaceRecordWithNamespaceName:(id)a0;
- (id)dynamicNamespaceRecordWithNamespaceName:(id)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)enumerateAppContainerIdsForContainer:(int)a0 block:(id /* block */)a1;
- (BOOL)enumerateDynamicNamespaceRecordsForContainer:(int)a0 teamId:(id)a1 block:(id /* block */)a2;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)hasUnfetchedNamespaceForTeamId:(id)a0;
- (BOOL)_enumerateDynamicNamespaceRecordsWithWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;

@end
