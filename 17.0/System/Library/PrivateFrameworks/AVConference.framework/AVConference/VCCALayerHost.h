@class AVCRemoteVideoClient;

@interface VCCALayerHost : CALayerHost {
    AVCRemoteVideoClient *remoteVideoClient;
}

- (void)layoutSublayers;
- (id)initWithRemoteVideoClient:(id)a0;

@end
