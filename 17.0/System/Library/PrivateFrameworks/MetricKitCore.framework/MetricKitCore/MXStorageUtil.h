@class NSFileManager, NSObject;
@protocol OS_os_log;

@interface MXStorageUtil : NSObject <MXStorageUtilProtocol>

@property (retain) NSFileManager *fileManager;
@property (retain) NSObject<OS_os_log> *logHandle;

- (id)init;
- (void).cxx_destruct;
- (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (id)_filesFromDirectory:(id)a0 error:(id *)a1;
- (BOOL)_removeFile:(id)a0 error:(id *)a1;
- (BOOL)_removeFiles:(id)a0 fromDirectory:(id)a1 error:(id *)a2;
- (id)archivedDataWithObject:(id)a0 error:(id *)a1;
- (BOOL)createDirectory:(id)a0 error:(id *)a1;
- (id)dataFromPath:(id)a0;
- (id)filesFromDirectory:(id)a0 error:(id *)a1;
- (BOOL)isDataExistAsDirectoryForPath:(id)a0;
- (BOOL)removeExistingFilesFromDirectory:(id)a0;
- (void)removeFile:(id)a0 error:(id *)a1;
- (BOOL)removeFiles:(id)a0 fromDirectory:(id)a1 error:(id *)a2;
- (void)removeFiles:(id)a0 withFilenameContainsSubstring:(id)a1 fromDirectory:(id)a2 error:(id *)a3;
- (BOOL)saveData:(id)a0 withFilePath:(id)a1;
- (void)setAuthProtectionForPath:(id)a0 fromAttributes:(id)a1;

@end
