@class NSObject;
@protocol OS_os_log;

@interface PGUpNextMusicCurator : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _isAppleMusicSubscriber;
}

+ (id)_appleMusicCurationWithFeaturesByMemory:(id)a0 musicCuratorContext:(id)a1 managerContext:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (id)_baseMemoryFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)_flexMusicCurationWithFeaturesByMemory:(id)a0 musicCurationOptions:(id)a1 musicCuratorContext:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (id)_photosGraphPropertiesForMemory:(id)a0 musicCurationFeatures:(id)a1 appleMusicCuration:(id)a2 flexMusicCuration:(id)a3 isAppleMusicSubscriber:(BOOL)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)_appleMusicCurationForMemories:(id)a0 curatorContext:(id)a1 managerContext:(id)a2 progressReporter:(id)a3 error:(id *)a4;
- (id)_flexMusicCurationForMemories:(id)a0 curatorContext:(id)a1 musicCurationOptions:(id)a2 managerContext:(id)a3 progressReporter:(id)a4 error:(id *)a5;
- (id)_musicCurationFeaturesForMemories:(id)a0 musicExtractionContext:(id)a1 managerContext:(id)a2 progressReporter:(id)a3 error:(id *)a4;
- (BOOL)curateMusicForUpNextMemoriesWithLocalIdentifiers:(id)a0 musicCurationOptions:(id)a1 photoLibrary:(id)a2 managerContext:(id)a3 error:(id *)a4;
- (id)initWithLoggingConnection:(id)a0;

@end
