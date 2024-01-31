@class NSString, _MRUserIdentityProtobuf;

@interface _MRGroupSessionParticipantProtobuf : PBCodable <NSCopying> {
    struct { unsigned char connected : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentity;
@property (retain, nonatomic) _MRUserIdentityProtobuf *identity;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL connected;

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
