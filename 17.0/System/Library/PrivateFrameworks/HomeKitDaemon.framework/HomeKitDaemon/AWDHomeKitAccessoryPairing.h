@class NSString, AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char certified : 1; unsigned char credentialType : 1; unsigned char duration : 1; unsigned char errorCode : 1; unsigned char noeCapabilities : 1; unsigned char noeOnboardDuration : 1; unsigned char noeOnboardErrorCode : 1; unsigned char noeStatus : 1; unsigned char retryCount : 1; unsigned char transportType : 1; unsigned char isAdd : 1; unsigned char isAddWithOwnershipProof : 1; unsigned char isAddedViaWAC : 1; unsigned char isBTOnboard : 1; unsigned char isFirstHAPAccessoryInAnyHome : 1; unsigned char isFirstHAPAccessoryInHome : 1; unsigned char isNetworkRouterAdd : 1; unsigned char isNetworkRouterReplace : 1; unsigned char isNoeAccessory : 1; unsigned char isNoeOnboard : 1; unsigned char isSecureWAC : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasIsAdd;
@property (nonatomic) BOOL isAdd;
@property (nonatomic) BOOL hasIsAddedViaWAC;
@property (nonatomic) BOOL isAddedViaWAC;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) int certified;
@property (nonatomic) BOOL hasIsSecureWAC;
@property (nonatomic) BOOL isSecureWAC;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL hasCredentialType;
@property (nonatomic) int credentialType;
@property (nonatomic) BOOL hasIsAddWithOwnershipProof;
@property (nonatomic) BOOL isAddWithOwnershipProof;
@property (nonatomic) BOOL hasIsNetworkRouterAdd;
@property (nonatomic) BOOL isNetworkRouterAdd;
@property (nonatomic) BOOL hasIsNetworkRouterReplace;
@property (nonatomic) BOOL isNetworkRouterReplace;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (nonatomic) BOOL hasIsFirstHAPAccessoryInAnyHome;
@property (nonatomic) BOOL isFirstHAPAccessoryInAnyHome;
@property (nonatomic) BOOL hasIsFirstHAPAccessoryInHome;
@property (nonatomic) BOOL isFirstHAPAccessoryInHome;
@property (nonatomic) BOOL hasIsNoeAccessory;
@property (nonatomic) BOOL isNoeAccessory;
@property (nonatomic) BOOL hasNoeCapabilities;
@property (nonatomic) unsigned int noeCapabilities;
@property (nonatomic) BOOL hasNoeStatus;
@property (nonatomic) unsigned int noeStatus;
@property (nonatomic) BOOL hasIsBTOnboard;
@property (nonatomic) BOOL isBTOnboard;
@property (nonatomic) BOOL hasIsNoeOnboard;
@property (nonatomic) BOOL isNoeOnboard;
@property (nonatomic) BOOL hasNoeOnboardDuration;
@property (nonatomic) unsigned int noeOnboardDuration;
@property (nonatomic) BOOL hasNoeOnboardErrorCode;
@property (nonatomic) int noeOnboardErrorCode;
@property (readonly, nonatomic) BOOL hasNoeOnboardErrorDomain;
@property (retain, nonatomic) NSString *noeOnboardErrorDomain;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)transportTypeAsString:(int)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsCredentialType:(id)a0;
- (int)StringAsCertified:(id)a0;
- (id)certifiedAsString:(int)a0;
- (id)credentialTypeAsString:(int)a0;

@end
