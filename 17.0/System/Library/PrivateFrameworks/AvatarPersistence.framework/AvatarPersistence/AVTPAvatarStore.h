@class AVTPuppetStore, NSString, AVTCoreEnvironment, NSObject;
@protocol AVTStoreBackend, AVTStickerBackendDelegate, AVTStickerBackend, AVTPBackendImageHandlingDelegate, OS_dispatch_queue, AVTUILogger;

@interface AVTPAvatarStore : NSObject <AVTStoreBackendDelegate, AVTAvatarStoreInternal, AVTAvatarStore>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backendAccessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *puppetStoreAccessQueue;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) id<AVTStoreBackend> backend;
@property (readonly, nonatomic) AVTPuppetStore *puppetStore;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) id<AVTStickerBackend> stickerBackend;
@property (weak, nonatomic) id<AVTPBackendImageHandlingDelegate> imageHandlingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTStickerBackendDelegate> stickerBackendDelegate;

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;
+ (id)defaultBackendWithWorkQueue:(id)a0 environment:(id)a1;

- (id)init;
- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (BOOL)canCreateAvatar;
- (id)avatarsForFetchRequest:(id)a0 error:(id *)a1;
- (id)initWithDomainIdentifier:(id)a0;
- (void)fetchAvatarsForFetchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAvatar:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canCreateAvatarWithError:(id *)a0;
- (void)deleteAvatarWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)deleteRecentStickersForChangeTracker:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)didUseStickerWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)duplicateAvatar:(id)a0 completionBlock:(id /* block */)a1;
- (id)recentStickersForFetchRequest:(id)a0 error:(id *)a1;
- (void)saveAvatarRecord:(id)a0 thumbnailAvatar:(id)a1 completionBlock:(id /* block */)a2 thumbnailGenerationCompletionBlock:(id /* block */)a3;
- (void)backend:(id)a0 didChangeRecordsWithIdentifiers:(id)a1;
- (id)initWithBackend:(id)a0 backendAccessQueue:(id)a1 puppetStore:(id)a2 stickerBackend:(id)a3 environment:(id)a4;
- (void)performAsynchronousWork:(id /* block */)a0;
- (void)performBackendWork:(id /* block */)a0;
- (void)performPuppetStoreWork:(id /* block */)a0;
- (void)postChangeNotificationForRecordWithIdentifiers:(id)a0 remote:(BOOL)a1;

@end
