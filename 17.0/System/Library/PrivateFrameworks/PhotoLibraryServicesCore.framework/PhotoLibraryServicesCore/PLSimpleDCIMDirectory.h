@class NSString, NSFileManager, NSURL, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface PLSimpleDCIMDirectory : NSObject {
    NSString *_subDirSuffix;
    unsigned long long _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectoryURL;
    unsigned long long _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    BOOL _hasLoadedUserInfo;
    NSObject<OS_dispatch_queue> *_isolation;
}

@property BOOL representsCameraRoll;
@property (readonly) NSURL *directoryURL;
@property BOOL shouldCheckForExistingFiles;

+ (id)cameraRollPlistName;
+ (id)cloudPlistName;
+ (id)migrateOldPlistToNewPlist:(id)a0;

- (id)initWithDirectoryURL:(id)a0 subDirectorySuffix:(id)a1 perDirectoryLimit:(unsigned long long)a2 userInfoPath:(id)a3;
- (void)reset;
- (id)_subDirURLForNumber:(unsigned long long)a0 create:(BOOL)a1 didCreate:(BOOL *)a2;
- (void)_loadUserInfoLastUsedDirectoryNumber:(id *)a0 lastUsedFileNumber:(id *)a1;
- (id)_currentSubDirectory;
- (void).cxx_destruct;
- (BOOL)_ensureDirectoryExists:(id)a0;
- (void)_saveUserInfo;
- (id)nextAvailableFileURLWithExtension:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_fileNameNumberRangeForDirNumber:(unsigned long long)a0;
- (id)_availableFileNameNumbersInDirNumber:(unsigned long long)a0;
- (id)_nextAvailableFileURLWithExtension:(id)a0;

@end
