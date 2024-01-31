@interface LogDumpUtility : NSObject

+ (id)getCachesDirectoryPath;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (void)removeFilesInDirectory:(id)a0 olderThan:(id)a1;
+ (BOOL)shouldCleanupFiles;
+ (BOOL)createDirectory:(id)a0;
+ (id)getDefaultLogDumpPath;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (id)createFileListSortedByTimestamp:(id)a0;

@end
