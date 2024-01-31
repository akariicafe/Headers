@class NSData, AppleTypeCRetimerHardwareID;

@interface B2PIdentificationResponse : B2PResponse

@property (readonly) AppleTypeCRetimerHardwareID *hardwareID;
@property (readonly) unsigned short chipID;
@property (readonly) unsigned short boardID;
@property (readonly) unsigned char securityEpoch;
@property (readonly) unsigned char productionStatus;
@property (readonly) unsigned char securityMode;
@property (readonly) unsigned char securityDomain;
@property (readonly) unsigned long long ecid;
@property (readonly) NSData *nonce;
@property (readonly) unsigned char apChipRev;

- (id)description;
- (void).cxx_destruct;
- (BOOL)parseResponse:(id)a0;

@end
