@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}

@property (class, readonly, nonatomic) NSURL *baseDirectoryURL;
@property (class, readonly, nonatomic) BOOL shouldExcludeFromBackup;
@property (class, readonly, nonatomic) Class managedTemporaryDirectoryClass;

+ (id)sharedManager;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)a0 filename:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)newDirectoryWithFilename:(id)a0;
- (id)_directoriesToRemoveOnInit;
- (void)_excludeFromBackupAsynchronously;
- (void)_removeDirectories:(id)a0;
- (void)_removeDirectoriesAsynchronously:(id)a0;

@end
