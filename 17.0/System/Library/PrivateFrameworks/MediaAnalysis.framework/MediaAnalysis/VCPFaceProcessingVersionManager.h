@class PHPhotoLibrary, NSDictionary;

@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}

+ (id)resetLevelDescription:(long long)a0;
+ (id)sharedManagerForPhotoLibrary:(id)a0;

- (int)currentProcessingVersion;
- (int)defaultProcessingVersion;
- (int)migrateFaceProcessingToVersion:(int)a0;
- (int)_updateCurrentProcessingVersion:(int)a0;
- (id)_versionStateURL;
- (id)initWithPhotoLibrary:(id)a0;
- (int)resetAnalysisDataWithResetLevel:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_updateVersionStateFileWithError:(id *)a0;

@end
