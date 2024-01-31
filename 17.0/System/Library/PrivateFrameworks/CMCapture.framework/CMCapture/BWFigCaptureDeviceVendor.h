@class NSObject, NSArray, NSMutableDictionary, CMIOExtensionDiscoverySession, NSMutableArray, BWFigCaptureDeviceClient;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface BWFigCaptureDeviceVendor : NSObject {
    void /* function */ *_defaultDeviceCreateFunction;
    void /* function */ *_cmioExtensionDeviceCreateFunction;
    NSMutableDictionary *_devicesStatesByDeviceID;
    NSMutableArray *_registeredDeviceClients;
    BWFigCaptureDeviceClient *_activeDeviceClient;
    NSMutableArray *_victimizedDeviceClients;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_source> *_defaultDeviceOpenTimer;
    double _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_transaction> *_activeForClientAssertion;
    NSMutableDictionary *_cameraPoseMatricesByPortTypeByDeviceID;
    CMIOExtensionDiscoverySession *_cmioDiscoverySession;
    unsigned long long _osStateHandle;
    NSMutableArray *_deviceCreationHistory;
}

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly) int activeDeviceClientPriority;
@property (readonly) BOOL cameraCalibrationValid;

+ (void)initialize;
+ (id)sharedCaptureDeviceVendor;
+ (BOOL)videoCaptureDeviceFirmwareIsLoaded;

- (id)registeredDeviceClientWithID:(int)a0;
- (void)shutDownSystemPressuredDevice:(id)a0;
- (id)copyDeviceWithID:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(BOOL)a2 error:(int *)a3;
- (void)dealloc;
- (int)registerClientWithPID:(int)a0 clientApplicationID:(id)a1 clientDescription:(id)a2 clientPriority:(int)a3 canStealFromClientsWithSamePriority:(BOOL)a4 deviceSharingWithOtherClientsAllowed:(BOOL)a5 deviceAvailabilityChangedHandler:(id /* block */)a6;
- (int)usageCountForDevice:(id)a0;
- (int)keepControlOfStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2;
- (void)invalidateVideoDevice:(id)a0 forPID:(int)a1;
- (void)resumeSystemPressuredDevice;
- (id)initWithDefaultDeviceCreateFunction:(void /* function */ *)a0 cmioExtensionDeviceCreateFunction:(void /* function */ *)a1 cmioDiscoverySession:(id)a2;
- (BOOL)activeDeviceEquals:(id)a0;
- (id)copyStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2 error:(int *)a3;
- (id)copyStreamForFlashlightWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2;
- (int)unregisterClient:(int)a0;
- (id)activeDeviceClient;
- (void)takeBackStreams:(id)a0 device:(id)a1;
- (int)requestControlOfStreams:(id)a0 device:(id)a1;
- (id)initWithDefaultDeviceCreateFunction:(void /* function */ *)a0;
- (id)registeredDeviceClients;
- (id)_copyStreamsWithPositions:(id)a0 deviceTypes:(id)a1 allowsStreamControlLoss:(BOOL)a2 forDevice:(id)a3 requestControl:(BOOL)a4 error:(int *)a5;
- (id)copyStreamsWithUniqueIDs:(id)a0 forDevice:(id)a1 error:(int *)a2;
- (id)copyStreamWithPosition:(int)a0 deviceType:(int)a1 allowsStreamControlLoss:(BOOL)a2 forDevice:(id)a3 error:(int *)a4;
- (id)_deviceWithID:(id)a0;
- (void)prewarmDefaultVideoDeviceForPID:(int)a0 completionHandler:(id /* block */)a1;
- (id)deviceWithID:(id)a0;
- (int)registerClientWithPID:(int)a0 clientDescription:(id)a1 clientPriority:(int)a2 canStealFromClientsWithSamePriority:(BOOL)a3 deviceSharingWithOtherClientsAllowed:(BOOL)a4 deviceAvailabilityChangedHandler:(id /* block */)a5;
- (id)victimizedDeviceClients;
- (id)cameraPoseMatrixForStreamWithPosition:(int)a0 deviceType:(int)a1 deviceID:(id)a2;
- (id)copyStreamWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2 error:(int *)a3;
- (void)_handleCMIOExtensionDevicesChangedNotification:(id)a0;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int *)a0;
- (id)copyStreamWithoutControlWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2;
- (void)takeBackDevice:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(BOOL)a2;
- (id)copyDeviceForClient:(int)a0 informClientWhenDeviceAvailableAgain:(BOOL)a1 error:(int *)a2;
- (BOOL)streamsInUseForDevice:(id)a0;
- (id)copyDeviceForPublishingWithID:(id)a0 error:(int *)a1;

@end
