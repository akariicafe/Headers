@class NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HPMForceRetimerDFUModeSetter : NSObject {
    unsigned int _hpmService;
    unsigned int _hpmConnection;
    unsigned int _address;
    BOOL _enableDFUMode;
    NSObject<OS_os_log> *_log;
    unsigned int _thunderboltController;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_semaphore> *_notificationSemaphore;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notification;
    struct IOCFPlugInInterfaceStruct **_cfPlugInInterface;
    struct AppleHPMLibInterfaceStructV3 **_hpmInterface;
}

- (void)dealloc;
- (const char *)requestType;
- (BOOL)setComplete;
- (void).cxx_destruct;
- (void)propertyChanged;
- (BOOL)dfuModeEnabled;
- (BOOL)doSet;
- (id)getACIOParentData;
- (unsigned int)getARMIODeviceRegistryEntryForACIOParentProperty:(id)a0;
- (BOOL)getAddressForDeviceService:(unsigned int)a0;
- (unsigned int)getThunderboltControllerForARMIODevice:(unsigned int)a0;
- (BOOL)initHPMInterface;
- (id)initWithHPMService:(unsigned int)a0 deviceService:(unsigned int)a1 enableDFUMode:(BOOL)a2;
- (BOOL)lookupThunderboltController;
- (BOOL)startMonitoringForOperationCompletion;

@end
