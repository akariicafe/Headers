@interface CAMTimelapseDiskUtilities : NSObject

+ (BOOL)hasPendingWork;
+ (id)timelapseDirectoryPathCreateIfNeeded:(BOOL)a0;
+ (id)dummyFilePathForTimelapseUUID:(id)a0;
+ (id)sortedArrayFromFilePathDictionary:(id)a0 reverse:(BOOL)a1;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)a0;
+ (id)stateFileName;
+ (id)updateSecondaryStateForTimelapseUUID:(id)a0 forStateReadSuccessfully:(BOOL)a1;
+ (id)timelapseDirectoryPath;
+ (id)readFrameFilePathsForTimelapseUUID:(id)a0;
+ (id)fileNameForImageFrameIndex:(long long)a0;
+ (id)updateSecondaryStateForTimelapseUUID:(id)a0 withStopReasons:(long long)a1 stopTime:(id)a2;
+ (id)secondaryStateFileName;
+ (BOOL)removeDummyFileForTimelapseUUID:(id)a0;
+ (id)readStateForTimelapseUUID:(id)a0 mergeSecondaryState:(BOOL)a1;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)a0;
+ (id)dummyFileName;
+ (id)directoryPathForTimelapseUUID:(id)a0;
+ (id)stateFilePathForTimelapseUUID:(id)a0;
+ (BOOL)writeSecondaryStateToDisk:(id)a0 forTimelapseUUID:(id)a1;
+ (long long)frameIndexFromImageFileName:(id)a0;
+ (id)timelapseUUIDsOnDisk;
+ (id)readSecondaryStateForTimelapseUUID:(id)a0;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)a0;
+ (BOOL)writeStateToDisk:(id)a0 createDirectoryIfNeeded:(BOOL)a1;
+ (id)fileNameForImageVISIndex:(long long)a0;
+ (BOOL)reserveDummyFileForTimelapseUUID:(id)a0 width:(long long)a1 height:(long long)a2 useHEVC:(BOOL)a3;

@end
