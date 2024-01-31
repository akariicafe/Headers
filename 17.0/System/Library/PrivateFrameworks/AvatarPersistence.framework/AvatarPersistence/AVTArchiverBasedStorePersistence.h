@interface AVTArchiverBasedStorePersistence : NSObject

+ (id)currentVersion;
+ (BOOL)isFileNotFoundError:(id)a0;
+ (BOOL)_createStoreEmptyFileIfNeededAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (BOOL)_createStoreFolderIfNeededAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (BOOL)_createStoreIfNeededAtLocation:(id)a0 logger:(id)a1 error:(id *)a2;
+ (id)_migrateDifferentAvatarKitVersionsForContent:(id)a0 logger:(id)a1;
+ (BOOL)_migrateFromPre0_5ToCurrentForStoreAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (BOOL)_migrateFromPre0_6ToCurrentForStoreAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (BOOL)_performMigrationIfNeededForStoreAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (id)_readContentFromDiskAtLocation:(id)a0 logger:(id)a1 error:(id *)a2;
+ (BOOL)_writeContent:(id)a0 toDiskAtLocation:(id)a1 logger:(id)a2 error:(id *)a3;
+ (BOOL)contentExistsAtLocation:(id)a0;
+ (id)dbLocationForStoreLocation:(id)a0;
+ (id)readContentFromDiskAtLocation:(id)a0 logger:(id)a1 error:(id *)a2;
+ (id)readVersionForStoreAtLocation:(id)a0 error:(id *)a1;
+ (BOOL)removeFilesAtLocation:(id)a0 error:(id *)a1;
+ (BOOL)writeContent:(id)a0 toDiskAtLocation:(id)a1 logger:(id)a2 error:(id *)a3;
+ (BOOL)writeVersion:(id)a0 toDiskAtLocation:(id)a1 error:(id *)a2;

@end
