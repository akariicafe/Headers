@class NSString;

@interface MGMediaSystem : MGGroup <MGAirPlayMetadataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForMediaSystem;
+ (id)predicateForType;

- (id)HomeKitMediaSystemIdentifier;
- (id)HomeKitMediaSystemWithHomeManager:(id)a0;
- (id)initWithClientService:(id)a0 mediaSystem:(id)a1 home:(id)a2;
- (id)initWithConnectionProvider:(id)a0 mediaSystem:(id)a1 home:(id)a2;
- (id)syncUUID;

@end
