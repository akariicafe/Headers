@class NSString, AFAudioSessionCoordinationSystemInfo, AFAudioSessionCoordinationDeviceInfo, AFPeerInfo;

@interface _AFAudioSessionCoordinationDeviceInfoMutation : NSObject <AFAudioSessionCoordinationDeviceInfoMutating> {
    AFAudioSessionCoordinationDeviceInfo *_base;
    AFPeerInfo *_peerInfo;
    AFAudioSessionCoordinationSystemInfo *_systemInfo;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPeerInfo : 1; unsigned char hasSystemInfo : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setPeerInfo:(id)a0;
- (id)getPeerInfo;
- (id)getSystemInfo;
- (void)setSystemInfo:(id)a0;

@end
