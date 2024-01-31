@class NSData, NSDictionary;

@interface AppleTypeCRetimerHardwareID : NSObject

@property (readonly) unsigned short chipID;
@property (readonly) unsigned short boardID;
@property (readonly) unsigned char securityEpoch;
@property (readonly) unsigned char productionStatus;
@property (readonly) unsigned char securityMode;
@property (readonly) unsigned char securityDomain;
@property (readonly) unsigned long long ecid;
@property (readonly) NSData *nonce;
@property (readonly) unsigned char chipRev;
@property (readonly) BOOL requiresPersonalization;
@property (readonly) NSDictionary *dictionary;
@property (readonly) BOOL isDeprecated;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithChipID:(unsigned short)a0 boardID:(unsigned short)a1 securityEpoch:(unsigned char)a2 productionStatus:(unsigned char)a3 securityMode:(unsigned char)a4 securityDomain:(unsigned char)a5 ecid:(unsigned long long)a6 nonce:(id)a7 chipRev:(unsigned char)a8;
- (id)nonceString;

@end
