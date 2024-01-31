@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSmartSiriVolumeClientDelegate;

@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssvConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSSmartSiriVolumeClientDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)_getRemoteServiceProxyObject;
- (void).cxx_destruct;
- (void)setSmartSiriVolumePercentage:(float)a0;
- (void)setPermanentVolumeOffsetWithDirection:(BOOL)a0;
- (void)_createClientConnection;
- (void)setSmartSiriVolumeDirection:(BOOL)a0;
- (void)didTTSVolumeChangeForReason:(unsigned long long)a0;
- (id)getVolumeForTTSType:(unsigned long long)a0 withContext:(id)a1;

@end
