@class NSProgress, NSString;

@interface PLModelMigrationAction_UpdateDuplicateProcessingState : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (id)fetchRequestForAnimated;
- (id)fetchRequestForAudioVideo;
- (id)fetchRequestForDocument;
- (id)fetchRequestForExposureScore;
- (id)fetchRequestForScreenshot;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (long long)processAssetStateMap:(id)a0 pendingParentUnitCount:(long long)a1 context:(id)a2 error:(id *)a3;
- (long long)updateDuplicateProcessingStateWithProcessingState:(unsigned short)a0 pendingParentUnitCount:(long long)a1 assetProcessingStateMap:(id)a2 context:(id)a3 request:(id)a4 error:(id *)a5;
- (long long)updateSceneClassificationDuplicateProcessingStateWithProcessingState:(unsigned short)a0 pendingParentUnitCount:(long long)a1 assetProcessingStateMap:(id)a2 context:(id)a3 request:(id)a4 error:(id *)a5;

@end
