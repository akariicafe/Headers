@class NSProgress, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXCPLPhotoLibrarySource : PXObservable {
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _percentCompletedForRebuild;
}

@property (retain) NSProgress *postOpenProgress;
@property (nonatomic) BOOL isCloudPhotosEnabled;
@property (nonatomic) BOOL isLocalModeEnabled;
@property (nonatomic) float fractionCompletedForRebuild;
@property (nonatomic) BOOL isRebuildingThumbnails;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)init;
- (void)dealloc;
- (void)accountDidChange:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_queue_subscribeToPostOpenProgressForPhotoLibrary:(id)a0;
- (void)_removePostOpenProgressObserverIfNeeded;
- (void)_updateFractionCompletedForRebuild;
- (void)_updateIsCloudPhotosEnabled;
- (void)_updateIsLocalModeEnabled;
- (void)_updateIsRebuildingThumbnails;

@end
