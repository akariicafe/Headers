@class NSMutableDictionary, MRMigrationDevice, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRProximityProvider : NSObject <MRMigrationDeviceDelegate, PCProvider>

@property (retain, nonatomic) NSMutableDictionary *remoteDevices;
@property (retain, nonatomic) NSMutableSet *providingDevices;
@property (retain, nonatomic) NSMutableDictionary *behaviorResults;
@property (retain, nonatomic) MRMigrationDevice *proactiveDevice;
@property (retain, nonatomic) NSString *migratingDevice;
@property (copy, nonatomic) id /* block */ behaviorCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ displayContextHandler;
@property (copy, nonatomic) id /* block */ progressEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (void)_migrate:(id)a0 destinationEndpoint:(id)a1 destinationUID:(id)a2 outputDevice:(id)a3 label:(id)a4 completion:(id /* block */)a5;

- (id)init;
- (id)_deviceForUID:(id)a0;
- (id)_displayContextForDevice:(id)a0 withRemotePlayerState:(id)a1 proactivePlayerState:(id)a2 migrationBehavior:(id)a3;
- (void)device:(id)a0 playerStateDidChange:(id)a1;
- (void)_migrateForDevice:(id)a0 completion:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)contentToDisplayForDevice:(id)a0;
- (void)receiveEvent:(id)a0;
- (id)_nameForDevice:(id)a0 inEndpoint:(id)a1;
- (id)_persistArtworkData:(id)a0 forDevice:(id)a1;
- (long long)migrationActionForProactivePlayer:(id)a0 proactiveEndpoint:(id)a1 remotePlayer:(id)a2 remoteEndpoint:(id)a3 reason:(id *)a4;
- (void)_recalculateMigrationBehaviorAndProvideUpdatedDisplayContextForDevice:(id)a0;
- (void)handleGroupSessionNotification:(id)a0;
- (void)_migrationBehaviorForRemoteDevice:(id)a0 proactiveDevice:(id)a1 completion:(id /* block */)a2;
- (void)_endProvidingDisplayContextIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)_removeDeviceIfNeeded:(id)a0;
- (void)_addDeviceIfNeeded:(id)a0;
- (void)_provideDisplayContextForDevice:(id)a0;
- (id)dictionaryRepresentation;
- (id)_outputDeviceWithUID:(id)a0 fromSource:(id)a1 andDestination:(id)a2;
- (id)_effectivePlayerStateForDevice:(id)a0;
- (void)_beginProvidingDisplayContextIfNeeded:(id)a0;
- (id)_displayStringForContentItem:(id)a0;
- (id)endpointForDevice:(id)a0;
- (void)_migrationBehaviorForRemoteDevice:(id)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (void)device:(id)a0 stateDidChange:(unsigned long long)a1;

@end
