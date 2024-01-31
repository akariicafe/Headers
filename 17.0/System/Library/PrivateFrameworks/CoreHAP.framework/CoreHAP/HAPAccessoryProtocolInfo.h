@class NSString, NSData, NSNumber, HMFVersion;

@interface HAPAccessoryProtocolInfo : HMFObject

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSNumber *currentStateNumber;
@property (readonly, nonatomic) NSNumber *currentConfigNumber;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) unsigned char featureFlags;
@property (readonly, nonatomic) unsigned char statusFlags;
@property (readonly, nonatomic) unsigned short categoryIdentifier;
@property (readonly, nonatomic) NSData *setupHash;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 currentStateNumber:(id)a1 currentConfigNumber:(id)a2 modelName:(id)a3 protocolVersion:(id)a4 authMethods:(unsigned char)a5 statusFlags:(unsigned char)a6 categoryIdentifier:(unsigned short)a7 setupHash:(id)a8;

@end
