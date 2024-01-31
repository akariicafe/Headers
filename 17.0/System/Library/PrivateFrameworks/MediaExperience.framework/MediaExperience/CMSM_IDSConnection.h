@class IDSDevice, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate> {
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
    IDSDevice *pNearbyPairedDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (id)init;
- (id)copyNearbyPairedDevice;
- (id)copyNearbyPairedDeviceName;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (id)copyNearbyPairedDeviceModelIdentifier;
- (id)copyNearbyPairedDeviceProductName;
- (id)copyNearbyPairedDeviceUniqueID;
- (void)updateNearbyPairedDevice;

@end
