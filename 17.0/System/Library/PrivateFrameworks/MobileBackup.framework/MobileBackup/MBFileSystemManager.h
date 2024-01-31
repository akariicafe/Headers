@interface MBFileSystemManager : NSObject

+ (BOOL)deleteSnapshotForVolume:(id)a0 name:(id)a1 error:(id *)a2;
+ (id)createAndMountSnapshotForVolume:(id)a0 name:(id)a1 atFirstAvailableMountPoint:(id)a2 error:(id *)a3 cancelationHandler:(id /* block */)a4;
+ (BOOL)unmountAndRenameSnapshotForVolume:(id)a0 name:(id)a1 mountPoint:(id)a2 newName:(id)a3 error:(id *)a4;
+ (unsigned long long)fileSystemCapacity;
+ (id)volumeMountPointForFile:(id)a0 error:(id *)a1;
+ (id)fetchAllAPFSVolumeMountPoints;
+ (BOOL)_createSnapshotForVolumeFd:(int)a0 volumeMountPoint:(id)a1 name:(id)a2 error:(id *)a3 cancelationHandler:(id /* block */)a4;
+ (void)removeDriveBackupSnapshotsWithLatestCreationDate:(id)a0;
+ (BOOL)renameSnapshotForVolume:(id)a0 name:(id)a1 newName:(id)a2 error:(id *)a3;
+ (BOOL)mountSnapshotForVolume:(id)a0 name:(id)a1 mountPoint:(id)a2 error:(id *)a3;
+ (BOOL)deleteAllSnapshotsForVolume:(id)a0 withPrefix:(id)a1 error:(id *)a2;
+ (id)listSnapshotsForVolume:(id)a0 error:(id *)a1;
+ (BOOL)unmountAndDeleteSnapshotForVolume:(id)a0 name:(id)a1 mountPoint:(id)a2 error:(id *)a3;
+ (void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)a0;
+ (BOOL)volumeSupportsLocalSnapshots:(id)a0;
+ (BOOL)startFilesystemKeyRollingWithPath:(id)a0 error:(id *)a1;
+ (BOOL)createSnapshotForVolume:(id)a0 name:(id)a1 error:(id *)a2 cancelationHandler:(id /* block */)a3;
+ (id)_deleteFileSystemSnapshots:(id)a0 block:(id /* block */)a1;
+ (BOOL)_mountSnapshotForVolumeFd:(int)a0 volumeMountPoint:(id)a1 name:(id)a2 mountPoint:(id)a3 error:(id *)a4;
+ (BOOL)deleteAllSnapshotsForVolume:(id)a0 withPrefix:(id)a1 latestCreationDate:(id)a2 error:(id *)a3;
+ (BOOL)unmount:(id)a0 error:(id *)a1;
+ (id)volumeUUIDWithVolumeMountPoint:(id)a0 error:(id *)a1;
+ (BOOL)stopFilesystemKeyRollingWithPath:(id)a0 error:(id *)a1;

@end
