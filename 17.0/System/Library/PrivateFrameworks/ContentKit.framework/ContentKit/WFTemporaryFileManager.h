@interface WFTemporaryFileManager : NSObject

+ (id)sharedAppGroupDirectoryURL;
+ (id)appGroupIdentifier;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (void)clearTemporaryFiles;
+ (void)setUpDirectories;
+ (BOOL)isTemporaryFile:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)createSharedDirectoryIfNecessary;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)temporaryDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)sharedTemporaryDirectoryURL;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;

@end
