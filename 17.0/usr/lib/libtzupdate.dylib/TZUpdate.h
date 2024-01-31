@class TZFileSystemInterface, NSXPCConnection;

@interface TZUpdate : NSObject

@property (retain) TZFileSystemInterface *fileSystemInterface;
@property (retain) NSXPCConnection *connectionToService;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUpdateWaiting;
- (id)affectedZones;
- (BOOL)alertForAllZones;
- (id)createNewXPCConnection;
- (id)currentTZDataVersion;
- (void)isUpdateWaitingWithCompletion:(id /* block */)a0;
- (void)purgeAllAssetsWithCompletion:(id /* block */)a0;
- (id)updateTZDataVersion;

@end
