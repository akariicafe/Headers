@class NSString;

@interface _GCGenericDeviceDBServiceConnection : GCConfigXPCServiceServiceConnection <_GCGenericDeviceDBService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceProtocol;

- (id)hasModelForDevice:(id)a0;
- (id)preparedModelForDevice:(id)a0;

@end
