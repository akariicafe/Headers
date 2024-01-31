@class PBFSQLiteDatabaseConnection, NSObject;
@protocol OS_os_log;

@interface PBFSQLitePreparedStatement : NSObject {
    PBFSQLiteDatabaseConnection *_dbConnection;
}

@property (nonatomic) NSObject<OS_os_log> *loggingCategory;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;

@end
