@interface PGFlexMusicCurator : NSObject

+ (id)curateFlexMusicWithCurationParameters:(id)a0 progressReporter:(id)a1 error:(id *)a2;
+ (id)generateDebugInformationForAssetCollection:(id)a0 graph:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)generateDebugInformationForSongWithUID:(id)a0 progressReporter:(id)a1 error:(id *)a2;

- (id)init;

@end
