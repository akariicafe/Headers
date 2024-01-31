@class NSString, HDCodableMessageVersion, NSData, HDCodableSyncIdentity;

@interface HDCodableClinicalAccount : PBCodable <NSCopying> {
    struct { unsigned char clinicalSharingFirstSharedDate : 1; unsigned char clinicalSharingLastSharedDate : 1; unsigned char clinicalSharingMultiDeviceStatus : 1; unsigned char clinicalSharingUserStatus : 1; unsigned char creationDate : 1; unsigned char failedFetchAttemptsCount : 1; unsigned char lastFailedFetchDate : 1; unsigned char lastFetchDate : 1; unsigned char lastFullFetchDate : 1; unsigned char modificationDate : 1; unsigned char userEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (nonatomic) BOOL hasUserEnabled;
@property (nonatomic) BOOL userEnabled;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasLastFetchDate;
@property (nonatomic) double lastFetchDate;
@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) BOOL hasLastFullFetchDate;
@property (nonatomic) double lastFullFetchDate;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL hasPatientHash;
@property (retain, nonatomic) NSString *patientHash;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (readonly, nonatomic) BOOL hasSignedClinicalDataIssuerIdentifier;
@property (retain, nonatomic) NSString *signedClinicalDataIssuerIdentifier;
@property (nonatomic) BOOL hasClinicalSharingFirstSharedDate;
@property (nonatomic) double clinicalSharingFirstSharedDate;
@property (nonatomic) BOOL hasClinicalSharingLastSharedDate;
@property (nonatomic) double clinicalSharingLastSharedDate;
@property (nonatomic) BOOL hasClinicalSharingUserStatus;
@property (nonatomic) long long clinicalSharingUserStatus;
@property (nonatomic) BOOL hasClinicalSharingMultiDeviceStatus;
@property (nonatomic) long long clinicalSharingMultiDeviceStatus;
@property (readonly, nonatomic) BOOL hasClinicalSharingPrimaryDeviceName;
@property (retain, nonatomic) NSString *clinicalSharingPrimaryDeviceName;
@property (nonatomic) BOOL hasLastFailedFetchDate;
@property (nonatomic) double lastFailedFetchDate;
@property (nonatomic) BOOL hasFailedFetchAttemptsCount;
@property (nonatomic) long long failedFetchAttemptsCount;
@property (readonly, nonatomic) BOOL hasCredentialSyncIdentifier;
@property (retain, nonatomic) NSData *credentialSyncIdentifier;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
