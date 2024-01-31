@class HMCharacteristic, NSString, HMAccessory, HMService, HMHome;
@protocol TVRCHMServiceWrapperDelegate;

@interface TVRCHMServiceWrapper : NSObject <HMAccessoryDelegate>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMService *service;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMCharacteristic *serviceCharacteristic;
@property (retain, nonatomic) HMCharacteristic *activeCharacteristic;
@property (retain, nonatomic) HMCharacteristic *volumeSelectorCharacteristic;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL sentWakeKey;
@property (nonatomic) BOOL volumeControlSupported;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *model;
@property (weak, nonatomic) id<TVRCHMServiceWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithService:(id)a0;

- (void)disconnect;
- (BOOL)supportsVolumeControl;
- (void)connect;
- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (void)sendButtonEvent:(id)a0;
- (void)_disconnectWithError:(id)a0;
- (void)_sendVolumeKey:(BOOL)a0;
- (void)_sendRemoteKey:(long long)a0;
- (id)_televisionServiceForAccessory:(id)a0;
- (BOOL)supportsInfoKey;
- (void)_checkVolumeServicesForAccessory:(id)a0;
- (long long)_remoteKeyForTVRCButton:(id)a0;
- (void)_sendWakeKey;
- (void)_serviceNameChanged:(id)a0;
- (void)_serviceRemoved:(id)a0;
- (void)_setCharacteristicsForService:(id)a0;
- (void)_startObservingServiceNotifications;
- (void)_stopObservingServiceNotifications;
- (void)_writeValue:(id)a0 toCharacteristic:(id)a1;

@end
