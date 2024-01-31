@class HDSQLiteDatabase, NSURL;

@interface HDSimpleGraphDatabase : NSObject {
    HDSQLiteDatabase *_database;
}

@property (class, copy, nonatomic) id /* block */ unitTesting_didInitGraphDatabaseHandler;

@property (readonly, nonatomic) HDSQLiteDatabase *underlyingDatabase;
@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;
@property (copy, nonatomic) id /* block */ unitTesting_didCreateDatabaseConnectionHandler;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isOpen) BOOL open;

+ (id)graphDatabaseWithURL:(id)a0 error:(id *)a1;

- (void)close;
- (id)unitTesting_countOfNodesWithError:(id *)a0;
- (id)init;
- (BOOL)enumerateRelationshipsWithSubjectID:(long long)a0 includeDeleted:(BOOL)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (void)dealloc;
- (BOOL)unitTesting_removeRelationshipWithID:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 error:(id *)a3;
- (BOOL)foreignKeysEnable:(BOOL)a0 error:(id *)a1;
- (id)schemaVersionWithError:(id *)a0;
- (id)nodeForID:(long long)a0 error:(id *)a1;
- (BOOL)enumerateNodesForPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;
- (id)unitTesting_insertNodeWithID:(long long)a0 error:(id *)a1;
- (id)description;
- (BOOL)addRelationshipWithSubjectNodeID:(long long)a0 type:(long long)a1 objectNodeID:(long long)a2 version:(long long)a3 slots:(unsigned long long)a4 error:(id *)a5;
- (BOOL)enumerateAttributesForNodeWithID:(long long)a0 includeDeleted:(BOOL)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)enumerateNodesForPredicate:(id)a0 includeDeleted:(BOOL)a1 limit:(unsigned long long)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
- (BOOL)enumerateAttributesForNodeWithID:(long long)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (BOOL)insertNodeWithID:(long long)a0 version:(long long)a1 slots:(unsigned long long)a2 deleted:(BOOL)a3 error:(id *)a4;
- (BOOL)enumerateRelationshipsForPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (id)unitTesting_countOfNodesWithRelationshipType:(long long)a0 error:(id *)a1;
- (BOOL)addAttributeForNodeID:(long long)a0 type:(long long)a1 value:(id)a2 version:(long long)a3 slots:(unsigned long long)a4 error:(id *)a5;
- (BOOL)unitTesting_addRelationshipWithType:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 error:(id *)a3;
- (BOOL)metadataValueForKey:(id)a0 valueOut:(id *)a1 error:(id *)a2;
- (BOOL)unitTesting_addAttributeWithType:(long long)a0 value:(id)a1 nodeID:(long long)a2 error:(id *)a3;
- (BOOL)performTransactionWithError:(id *)a0 write:(BOOL)a1 block:(id /* block */)a2;
- (BOOL)deleteNodeWithID:(long long)a0 error:(id *)a1;
- (BOOL)enumerateRelationshipsForPredicate:(id)a0 includeDeleted:(BOOL)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (BOOL)setMetadataValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)deleteWithError:(id *)a0;

@end
