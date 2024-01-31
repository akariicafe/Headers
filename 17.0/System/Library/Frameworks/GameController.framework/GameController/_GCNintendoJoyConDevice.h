@class _GCNintendoJoyConDeviceManager, NSString, NSArray, _GCDeviceConfiguration, NSSet, _GCNintendoFusedJoyConDevice, GCDeviceBattery, _GCHIDServiceInfo, NSMapTable, GCHapticCapabilityGraph;
@protocol _GCDeviceDriverConnection, _GCGamepadEventSourceDescription, NSSecureCoding, GCBatteryServiceServerInterface, NSCopying, NSObject;

@interface _GCNintendoJoyConDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, _GCDeviceHapticCapabilitiesComponent, GCNintendoJoyConFusionGestureServiceClientInterface, _GCDriverClientHapticInterfaceProvider, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, _GCPhysicalDevice, _GCLogicalDevice> {
    _GCHIDServiceInfo *_serviceInfo;
    id _driverConnectionInvalidationRegistration;
    NSMapTable *_clients;
    long long _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
    id /* block */ _batteryComponentBatteryUpdatedHandler;
    id<GCBatteryServiceServerInterface> _batteryServiceServer;
    GCDeviceBattery *_battery;
    NSMapTable *_clientBatteryEndpoints;
}

@property (readonly) id<_GCGamepadEventSourceDescription> gamepadEventSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long indicatedPlayerIndex;
@property (copy, nonatomic) id /* block */ deviceBatteryServiceConnectedHandler;
@property (copy, nonatomic) id /* block */ deviceBatteryComponentBatteryUpdatedHandler;
@property (readonly, nonatomic) GCDeviceBattery *battery;
@property (readonly, nonatomic) NSArray *hapticEngines;
@property (readonly, nonatomic) GCHapticCapabilityGraph *hapticCapabilityGraph;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; } bodyColor;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; } buttonsColor;
@property (nonatomic) unsigned char inputMode;
@property (readonly, nonatomic) id<_GCDeviceDriverConnection> driverConnection;
@property (retain, nonatomic) _GCDeviceConfiguration *configuration;
@property (weak, nonatomic) _GCNintendoFusedJoyConDevice *fusionDevice;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly, weak) _GCNintendoJoyConDeviceManager *manager;
@property (readonly) NSSet *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSSet *underlyingDevices;

- (id)init;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (void)setDriverConnection:(id)a0;
- (void)_addClient:(id)a0;
- (void)_removeClient:(id)a0;
- (id)initWithHIDDevice:(id)a0 manager:(id)a1 type:(unsigned char)a2;
- (void)activateLogical;
- (id)hapticDriver;
- (void)homeButtonLongPressGesture:(BOOL)a0;
- (id)makeControllerForClient:(id)a0;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)a0 didReceivePlayerIndexChange:(long long)a1;
- (void)propagateBattery:(id)a0;
- (id)readBattery;
- (void)updateBattery:(unsigned char)a0 isCharging:(BOOL)a1;

@end
