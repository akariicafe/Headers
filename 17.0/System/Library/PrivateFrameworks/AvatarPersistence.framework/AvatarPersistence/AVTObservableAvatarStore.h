@class NSString, NSObject;
@protocol AVTStickerBackendDelegate, AVTAvatarStoreDelegate, OS_dispatch_queue, AVTAvatarStoreInternal;

@interface AVTObservableAvatarStore : NSObject <AVTAvatarStoreInternal>

@property (readonly, nonatomic) id<AVTAvatarStoreInternal> store;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (weak, nonatomic) id<AVTAvatarStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTStickerBackendDelegate> stickerBackendDelegate;

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;

- (void).cxx_destruct;
- (BOOL)canCreateAvatar;
- (id)avatarsForFetchRequest:(id)a0 error:(id *)a1;
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
- (id)initWithStore:(id)a0 callbackQueue:(id)a1;

@end
