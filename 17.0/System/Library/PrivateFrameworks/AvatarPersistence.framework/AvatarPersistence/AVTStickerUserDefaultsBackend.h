@class NSMutableArray, NSString, NSURL, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, AVTUILogger, AVTStickerBackendDelegate;

@interface AVTStickerUserDefaultsBackend : NSObject <AVTStickerBackend>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSURL *cacheLocation;
@property (retain, nonatomic) NSMutableArray *stickers;
@property (nonatomic) unsigned long long frequencyCounter;
@property (weak, nonatomic) id<AVTStickerBackendDelegate> stickerBackendDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deleteRecentStickersForChangeTracker:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)didUseStickerWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)recentStickersForFetchRequest:(id)a0 error:(id *)a1;
- (void)_recentStickersChangedExternally;
- (id)addNextFrequencyCountToFrequencySum:(id)a0;
- (void)addStickerWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1;
- (id)fetchAllStickers;
- (id)fetchMostRecentStickersWithLimit:(unsigned long long)a0;
- (id)fetchStickersWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1;
- (void)getStickersFromUserDefaults;
- (id)initWithWorkQueue:(id)a0 environment:(id)a1 userDefaults:(id)a2;
- (id)nextFrequencyCount;
- (void)saveStickersToUserDefaults;
- (id)stickersIndexesMatchingAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1;
- (void)updateStickerAtIndex:(unsigned long long)a0;

@end
