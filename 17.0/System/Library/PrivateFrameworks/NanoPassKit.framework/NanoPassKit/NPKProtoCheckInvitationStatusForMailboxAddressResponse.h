@class NSData;

@interface NPKProtoCheckInvitationStatusForMailboxAddressResponse : PBCodable <NSCopying> {
    struct { unsigned char valid : 1; } _has;
}

@property (nonatomic) BOOL hasValid;
@property (nonatomic) BOOL valid;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
