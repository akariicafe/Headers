@class NSURL;

@interface CallDBMetaInfo : NSObject

@property (retain) NSURL *dbInfoPrefFile;

- (id)initWithURL:(id)a0;
- (BOOL)validateInfo:(BOOL)a0;
- (void)writeDatabaseVersion:(long long)a0 isTemp:(BOOL)a1;
- (void).cxx_destruct;
- (long long)readDatabaseVersion:(BOOL)a0;

@end
