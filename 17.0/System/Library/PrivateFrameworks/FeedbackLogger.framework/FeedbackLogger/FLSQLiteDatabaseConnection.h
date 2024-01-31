@class NSString, NSObject;
@protocol OS_os_log;

@interface FLSQLiteDatabaseConnection : NSObject

@property (copy, nonatomic) NSString *storePath;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) struct sqlite3 { } *db;

- (void)close;
- (id)initWithStorePath:(id)a0;
- (void)dealloc;
- (BOOL)open;
- (void).cxx_destruct;

@end
