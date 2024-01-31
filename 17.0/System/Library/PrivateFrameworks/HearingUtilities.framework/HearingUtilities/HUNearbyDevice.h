@class IDSDevice, NSString, NSMutableDictionary, NSMutableArray;

@interface HUNearbyDevice : NSObject

@property (retain, nonatomic) NSMutableArray *registeredDomains;
@property (retain, nonatomic) NSMutableArray *updateDomains;
@property (retain, nonatomic) NSMutableDictionary *state;
@property (retain, nonatomic) NSString *identifierWithoutDevice;
@property (retain, nonatomic) IDSDevice *idsDevice;

+ (id)nearbyDeviceWithIDSDevice:(id)a0;
+ (id)nearbyDeviceWithIDSIdentifier:(id)a0;

- (id)identifier;
- (BOOL)isCompanion;
- (id)description;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithIDSDevice:(id)a0;
- (id)initWithIDSIdentifier:(id)a0;
- (id)stateForDomain:(id)a0;
- (void)setState:(id)a0 forDomain:(id)a1;
- (id)deviceTypeDescription;
- (BOOL)equalsToIdentifier:(id)a0;
- (BOOL)representsAWatch;

@end
