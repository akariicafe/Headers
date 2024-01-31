@class NSSet, NSDictionary, NSString;

@interface WhitelistChecker : NSObject

@property (retain, nonatomic) NSSet *blackListedPaths;
@property (retain, nonatomic) NSDictionary *domains;
@property (retain, nonatomic) NSString *domainsPlistFilePath;

- (BOOL)load;
- (id)init;
- (BOOL)loadFromFile:(id)a0;
- (void).cxx_destruct;
- (BOOL)annotated:(id)a0;
- (BOOL)checkFile_WatchAndTV:(id)a0 withMetaData:(id)a1;
- (BOOL)checkFile_iOS:(id)a0 withMetaData:(id)a1;
- (BOOL)checkFile_macOS:(id)a0 withMetaData:(id)a1;
- (BOOL)checkManifest:(id)a0;
- (id)createFullPathList:(id)a0 rootPath:(id)a1 isAllowList:(BOOL)a2;
- (BOOL)file:(id)a0 blacklisted:(id)a1;
- (BOOL)file:(id)a0 whitelisted:(id)a1;
- (id)getRealPathForFile:(id)a0 withMetaData:(id)a1;
- (BOOL)handleSystemContainerFiles:(id)a0 withMetadata:(id)a1;
- (BOOL)shouldRestoreSystemContainer_WatchAndTV:(id)a0 shared:(BOOL)a1;
- (BOOL)shouldRestoreSystemContainer_iOS:(id)a0 shared:(BOOL)a1;

@end
