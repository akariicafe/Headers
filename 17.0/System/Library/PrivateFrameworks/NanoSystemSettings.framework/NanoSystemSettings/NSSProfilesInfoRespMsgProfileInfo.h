@class NSString, NSData;

@interface NSSProfilesInfoRespMsgProfileInfo : PBCodable <NSCopying> {
    struct { unsigned char isInstalledByDeclarativeManagement : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFriendlyName;
@property (retain, nonatomic) NSString *friendlyName;
@property (readonly, nonatomic) BOOL hasProfileDescription;
@property (retain, nonatomic) NSString *profileDescription;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasUUID;
@property (retain, nonatomic) NSString *uUID;
@property (readonly, nonatomic) BOOL hasOrganization;
@property (retain, nonatomic) NSString *organization;
@property (readonly, nonatomic) BOOL hasExpiryDate;
@property (retain, nonatomic) NSData *expiryDate;
@property (nonatomic) BOOL hasIsInstalledByDeclarativeManagement;
@property (nonatomic) BOOL isInstalledByDeclarativeManagement;

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
