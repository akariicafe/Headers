@class NSXPCConnection;
@protocol AVTUILogger;

@interface AVTAvatarRemoteImageRenderer : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<AVTUILogger> logger;

- (id)init;
- (id)initWithEnvironment:(id)a0;
- (id)_setupConnection;
- (void).cxx_destruct;
- (void)_startRequestWithRetryCount:(unsigned long long)a0 withReply:(id /* block */)a1 connectionRequestHandler:(id /* block */)a2;
- (void)_requestStickerAndCacheWithProxy:(id)a0 avatarRecord:(id)a1 stickerPackName:(id)a2 stickerConfigurationName:(id)a3 resource:(id)a4 reply:(id /* block */)a5;
- (void)_tearDownService;
- (void)getSnapshotAndCacheForAvatarRecord:(id)a0 scope:(id)a1 withReply:(id /* block */)a2;
- (void)getSnapshotForAvatar:(id)a0 scope:(id)a1 withModifications:(id)a2 withReply:(id /* block */)a3;
- (void)getSnapshotForAvatar:(id)a0 scope:(id)a1 withReply:(id /* block */)a2;
- (void)getStickerAndCacheForAvatarRecord:(id)a0 withStickerPackName:(id)a1 stickerConfigurationName:(id)a2 resource:(id)a3 withReply:(id /* block */)a4;

@end
