@class NSString, NSData, HAPDeviceID, HMFVersion;

@interface HAP2AccessoryServerMetadata : HAP2LoggingObject <HAP2AccessoryServerMetadata>

@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) BOOL hasPairings;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned short stateNumber;
@property (readonly, nonatomic) unsigned short configNumber;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDeviceID:(id)a0 hasPairings:(BOOL)a1 protocolVersion:(id)a2 name:(id)a3 model:(id)a4 category:(unsigned long long)a5 stateNumber:(unsigned short)a6 configNumber:(unsigned short)a7 setupHash:(id)a8;

@end
