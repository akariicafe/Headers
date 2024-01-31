@class NSArray, NSMutableDictionary, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification <NSCopying>

@property (nonatomic) BOOL ignoreRFTechOnIsEqual;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) BOOL odaRequired;
@property (readonly) unsigned long long terminalType;
@property (readonly) unsigned char terminalSubType;
@property (readonly, retain) NSArray *tciArray;
@property (readonly, retain) NSData *openLoopSchemeBitfield;
@property (readonly, retain) NSData *homeKitSchemeDataPayload;
@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) unsigned int pairingMode;
@property (readonly) NSData *terminalTypeData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_parseCHTerminalTypeData:(id)a0;
- (id)initWithNotificationType:(unsigned long long)a0 rfTechnology:(unsigned int)a1 typeFSystemCode:(unsigned short)a2 creationDate:(id)a3 cachedBeforeRFReset:(BOOL)a4 odaRequired:(BOOL)a5 terminalType:(unsigned long long)a6 terminalSubType:(unsigned char)a7 tciArray:(id)a8 openLoopSchemeBitfield:(id)a9 homeKitSchemeDataPayload:(id)a10 readerIdentifier:(id)a11 pairingMode:(unsigned int)a12 terminalTypeData:(id)a13 ignoreRFTechOnIsEqual:(BOOL)a14 userInfo:(id)a15;

@end
