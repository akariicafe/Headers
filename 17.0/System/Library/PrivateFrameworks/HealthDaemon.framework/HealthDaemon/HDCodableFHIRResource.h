@class NSString, HDCodableMessageVersion, NSData, HDCodableSyncIdentity;

@interface HDCodableFHIRResource : PBCodable <NSCopying> {
    struct { unsigned char extractionHints : 1; unsigned char firstSeenDate : 1; unsigned char originVersionMajor : 1; unsigned char originVersionMinor : 1; unsigned char originVersionPatch : 1; unsigned char receivedDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (readonly, nonatomic) BOOL hasResourceID;
@property (retain, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) BOOL hasRawContent;
@property (retain, nonatomic) NSData *rawContent;
@property (nonatomic) BOOL hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (readonly, nonatomic) BOOL hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (readonly, nonatomic) BOOL hasFhirVersion;
@property (retain, nonatomic) NSString *fhirVersion;
@property (readonly, nonatomic) BOOL hasReceivedDateTimeZoneName;
@property (retain, nonatomic) NSString *receivedDateTimeZoneName;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) BOOL hasExtractionHints;
@property (nonatomic) long long extractionHints;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL hasOriginVersionMajor;
@property (nonatomic) long long originVersionMajor;
@property (nonatomic) BOOL hasOriginVersionMinor;
@property (nonatomic) long long originVersionMinor;
@property (nonatomic) BOOL hasOriginVersionPatch;
@property (nonatomic) long long originVersionPatch;
@property (readonly, nonatomic) BOOL hasOriginVersionBuild;
@property (retain, nonatomic) NSString *originVersionBuild;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (nonatomic) BOOL hasFirstSeenDate;
@property (nonatomic) double firstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateTimeZoneName;
@property (retain, nonatomic) NSString *firstSeenDateTimeZoneName;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) BOOL hasUniquenessChecksum;
@property (retain, nonatomic) NSData *uniquenessChecksum;

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
