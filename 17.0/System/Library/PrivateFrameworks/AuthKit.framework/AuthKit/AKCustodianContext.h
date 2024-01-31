@class AKDevice, NSString, NSUUID, NSData, NSArray, NSDate, NSDictionary;

@interface AKCustodianContext : NSObject <AKAuthenticationContext, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setIdentityToken:) NSString *_identityToken;
@property (copy, nonatomic, setter=_setHeartbeatToken:) NSString *_heartbeatToken;
@property (copy, nonatomic) NSString *ownerAppleID;
@property (copy, nonatomic) NSString *ownerCustodianAltDSID;
@property (copy, nonatomic) NSUUID *custodianUUID;
@property (copy, nonatomic) NSData *wrappingKeyRKC;
@property (copy, nonatomic) NSString *custodianSetupToken;
@property (copy, nonatomic) NSString *pushToken;
@property (copy, nonatomic) NSString *recoverySessionID;
@property (copy, nonatomic) NSString *custodianRecoveryToken;
@property (copy, nonatomic) NSData *aaData;
@property (copy, nonatomic) NSData *idmsData;
@property (copy, nonatomic) NSData *encryptedPRKC;
@property (copy, nonatomic) NSString *recoveryStep;
@property (nonatomic) BOOL ownerDevice;
@property (nonatomic) long long clientErrorCode;
@property (nonatomic) long long notificationAction;
@property (copy, nonatomic) NSString *transactionID;
@property (nonatomic) BOOL _cliMode;
@property (copy, nonatomic) NSArray *custodianUUIDs;
@property (copy, nonatomic) NSArray *beneficiaryUUIDs;
@property (copy, nonatomic) NSDate *lastDataSyncTimestamp;
@property (copy, nonatomic) NSArray *custodianContacts;
@property (copy, nonatomic) NSArray *beneficiaryContacts;
@property (nonatomic, getter=isCustodianSyncAction) BOOL custodianSyncAction;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) unsigned long long authenticationMode;
@property (nonatomic) BOOL isMDMInformationRequired;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL cliMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
