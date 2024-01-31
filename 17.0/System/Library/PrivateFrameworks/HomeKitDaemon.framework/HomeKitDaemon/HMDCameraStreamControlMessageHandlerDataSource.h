@class NSString, HMDCameraNetworkConfig;

@interface HMDCameraStreamControlMessageHandlerDataSource : HMFObject <HMDCameraStreamControlMessageHandlerDataSource>

@property (readonly) BOOL supportsReceivingRemoteCameraStream;
@property (readonly) BOOL supportsChangingVolume;
@property (readonly) BOOL supportsBidirectionalAudioForCameraStreaming;
@property (readonly, getter=isResidentCapable) BOOL residentCapable;
@property (readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
