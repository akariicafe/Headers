@class NSString, AVTStickerConfigurationProvider, AVTStickerRecentsMigrator, AVTUIEnvironment, NSArray, AVTStickerGenerator, NSObject, AVTStickerRecentsLayout, AVTUIStickerGeneratorPool, AVTClippableImageStore, AVTSerialTaskScheduler;
@protocol NSObject, OS_dispatch_queue, AVTResourceCache, AVTStickerRecentsSwiftProviderDelegate, AVTAvatarStoreInternal, AVTAvatarRecord;

@interface AVTStickerRecentsSwiftProvider : NSObject <AVTStickerBackendDelegate> {
    id<AVTStickerRecentsSwiftProviderDelegate> _delegate;
    long long _recentsRequestedCount;
}

@property (retain, nonatomic) AVTStickerRecentsMigrator *stickerRecentsMigrator;
@property (retain, nonatomic) id<NSObject> avatarStoreChangeObserver;
@property (nonatomic) BOOL hasFetchedDefaultMemoji;
@property (retain, nonatomic) id<AVTAvatarRecord> defaultMemoji;
@property (retain, nonatomic) AVTClippableImageStore *imageStore;
@property (readonly, nonatomic) id<AVTAvatarStoreInternal> avatarStore;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTResourceCache> cache;
@property (readonly, nonatomic) AVTStickerGenerator *stickerGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recentsWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue;
@property (retain, nonatomic) AVTStickerConfigurationProvider *configurationProvider;
@property (retain, nonatomic) AVTSerialTaskScheduler *taskScheduler;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (readonly, nonatomic) AVTStickerRecentsLayout *stickerRecentsLayout;
@property (retain, nonatomic) NSArray *displayItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageStoreWithEnvironment:(id)a0;
+ (id)stickerCacheWithEnvironment:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_notifyStoreChanged;
- (void)beginObservingAvatarStoreChanges;
- (void)endObservingAvatarStoreChanges;
- (void)fetchDefaultMemojiIfNeeded;
- (id)fetchRecents:(long long)a0 excludingStickersMatchingRules:(id)a1;
- (void)recentStickersDidChange:(id)a0;

@end
