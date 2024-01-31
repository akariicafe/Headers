@class AVTSnapshotBuilder, NSObject, AVTAvatarRemoteImageRenderer;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTAvatarImageRenderer : NSObject

@property (retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder;
@property (retain, nonatomic) AVTAvatarRemoteImageRenderer *remoteImageRenderer;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotBuilderQueue;

- (id)init;
- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (id)initWithSceneNodeModifications:(id)a0;
- (id)_imageForAvatar:(id)a0 scope:(id)a1;
- (double)fieldOfViewForNodeWithName:(id)a0;
- (id)imageForAvatar:(id)a0 scope:(id)a1;
- (id)imageForAvatar:(id)a0 scope:(id)a1 usingService:(BOOL)a2;
- (id)imageForAvatar:(id)a0 scope:(id)a1 withSCNModifications:(id)a2 usingService:(BOOL)a3;
- (id)initWithSnapshotBuilder:(id)a0 lockProvider:(id /* block */)a1 remoteImageRenderer:(id)a2 logger:(id)a3;
- (id)nts_imageForAvatar:(id)a0 scope:(id)a1;
- (void)updateSnapshotBuilderModifications:(id)a0;

@end
