@class NSString, NSData;

@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying> {
    struct { unsigned char dateCreated : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasShareURL;
@property (retain, nonatomic) NSString *shareURL;
@property (readonly, nonatomic) BOOL hasShareInvitationToken;
@property (retain, nonatomic) NSData *shareInvitationToken;
@property (readonly, nonatomic) BOOL hasContainerIdentifier;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (nonatomic) BOOL hasDateCreated;
@property (nonatomic) double dateCreated;

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
