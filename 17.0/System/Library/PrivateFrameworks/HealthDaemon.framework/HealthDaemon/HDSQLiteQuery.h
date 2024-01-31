@class HDSQLiteDatabase, HDSQLiteQueryDescriptor, NSString;

@interface HDSQLiteQuery : NSObject {
    HDSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) HDSQLiteDatabase *database;
@property (readonly) HDSQLiteQueryDescriptor *queryDescriptor;
@property (readonly, copy) NSString *lastSQLStatement;

- (BOOL)enumeratePersistentIDsAndProperties:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 descriptor:(id)a1;
- (BOOL)enumerateProperties:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (BOOL)deleteAllEntitiesWithError:(id *)a0;

@end
