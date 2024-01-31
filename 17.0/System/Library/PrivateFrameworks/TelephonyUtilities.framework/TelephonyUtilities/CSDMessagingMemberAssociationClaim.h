@class NSString, CSDMessagingHandle;

@interface CSDMessagingMemberAssociationClaim : PBCodable <NSCopying> {
    struct { unsigned char primaryIdentifier : 1; unsigned char type : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasPrimaryHandle;
@property (retain, nonatomic) CSDMessagingHandle *primaryHandle;
@property (nonatomic) BOOL hasPrimaryIdentifier;
@property (nonatomic) unsigned long long primaryIdentifier;
@property (readonly, nonatomic) BOOL hasPrimaryAvcIdentifier;
@property (retain, nonatomic) NSString *primaryAvcIdentifier;
@property (readonly, nonatomic) BOOL hasAssociatedPseudonym;
@property (retain, nonatomic) CSDMessagingHandle *associatedPseudonym;
@property (readonly, nonatomic) BOOL hasConversationGroupUUIDString;
@property (retain, nonatomic) NSString *conversationGroupUUIDString;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

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
- (id)tuAssociationForHandle:(id)a0;

@end
