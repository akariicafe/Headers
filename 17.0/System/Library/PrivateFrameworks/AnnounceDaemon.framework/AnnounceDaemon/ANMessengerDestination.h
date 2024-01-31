@class HMHome, NSArray;

@interface ANMessengerDestination : NSObject

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *devices;

+ (id)_bestRemoteRelayAccessoryFromAccessories:(id)a0 inHome:(id)a1;
+ (id)_destinationForAppleAccessories:(id)a0 home:(id)a1 rooms:(id)a2 rapportConnection:(id)a3;
+ (id)destinationForAccessoriesInHome:(id)a0 rooms:(id)a1 rapportConnection:(id)a2;
+ (id)destinationForHome:(id)a0 excludingUsers:(id)a1 excludingAccessories:(id)a2 rapportConnection:(id)a3;
+ (id)relayDestinationForHome:(id)a0 rooms:(id)a1 rapportConnection:(id)a2 error:(id *)a3;

- (id)init;
- (void)removeUser:(id)a0;
- (void).cxx_destruct;
- (BOOL)addAccessory:(id)a0;
- (BOOL)addUser:(id)a0 inHome:(id)a1;
- (BOOL)addDeviceWithID:(id)a0 rapportConnection:(id)a1;
- (void)addUser:(id)a0 inHome:(id)a1 rapportConnection:(id)a2;
- (id)idsIdentifiersForService:(id)a0;
- (id)participantsWithService:(id)a0;
- (void)removeDeviceWithID:(id)a0;
- (void)removeUser:(id)a0 rapportConnection:(id)a1;

@end
