@class NSMutableDictionary, EDPersistenceDatabaseConnection;

@interface _EDThreadPersistence_StatementCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *preparedStatements;
@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)preparedStatementForQueryString:(id)a0;

@end
