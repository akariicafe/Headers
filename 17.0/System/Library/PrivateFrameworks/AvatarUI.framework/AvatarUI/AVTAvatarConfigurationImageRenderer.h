@class AVTMemoji, AVTSnapshotBuilder, NSObject;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTAvatarConfigurationImageRenderer : NSObject

@property (readonly, nonatomic) AVTMemoji *avatar;
@property (retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotBuilderQueue;

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (id)imageForAvatarConfiguration:(id)a0 scope:(id)a1;
- (id)initWithEnvironment:(id)a0 avatar:(id)a1;
- (id)initWithSnapshotBuilder:(id)a0 avatar:(id)a1 lockProvider:(id /* block */)a2 logger:(id)a3;
- (id)nts_imageForAvatarConfiguration:(id)a0 scope:(id)a1;

@end
