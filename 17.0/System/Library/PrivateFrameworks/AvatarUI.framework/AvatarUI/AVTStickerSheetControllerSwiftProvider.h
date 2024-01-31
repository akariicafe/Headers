@class NSString, AVTStickerConfigurationProvider, AVTUIEnvironment, AVTUILogger, _AVTAvatarRecordImageProvider, NSMutableDictionary, AVTAvatarStore, NSObject, AVTStickerTaskScheduler, AVTUIStickerGeneratorPool;
@protocol AVTResourceCache, AVTStickerSheetControllerSwiftProviderDelegate, OS_dispatch_queue, NSObject;

@interface AVTStickerSheetControllerSwiftProvider : NSObject <AVTStickerSheetControllerDelegate>

@property (readonly, nonatomic) AVTAvatarStore *avatarStore;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTUILogger *logger;
@property (readonly, nonatomic) id<AVTResourceCache> cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue;
@property (retain, nonatomic) AVTStickerConfigurationProvider *configurationProvider;
@property (retain, nonatomic) AVTStickerTaskScheduler *stickerScheduler;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (retain, nonatomic) _AVTAvatarRecordImageProvider *imageProvider;
@property (retain, nonatomic) NSMutableDictionary *sheetControllers;
@property (retain, nonatomic) id<NSObject> avatarStoreChangeObserver;
@property (weak, nonatomic) id<AVTStickerSheetControllerSwiftProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerCacheWithEnvironment:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_notifyStoreChanged;
- (void)beginObservingAvatarStoreChanges;
- (void)endObservingAvatarStoreChanges;
- (void)recentStickersDidChange:(id)a0;
- (void)stickerSheetController:(id)a0 didFinishRenderingStickersForRecord:(id)a1;
- (void)stickerSheetController:(id)a0 didInteractWithStickerItem:(id)a1 atIndex:(long long)a2 byPeeling:(BOOL)a3;
- (void)stickerSheetController:(id)a0 didScrollToContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)stickerSheetController:(id)a0 requestsStickerForFileURL:(id)a1 localizedDescription:(id)a2 forItemWithIdentifier:(id)a3;
- (void)stickerSheetController:(id)a0 scrollView:(id)a1 willEndDraggingWithTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)stickerSheetControllerForAvatarRecord:(id)a0;
- (id)stickerSheetViewForAvatarRecord:(id)a0;

@end
