@class NSString, NSData;

@interface DecryptedParticipantPayload : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTokenUri;
@property (retain, nonatomic) NSString *tokenUri;
@property (readonly, nonatomic) BOOL hasPresenceIdentifier;
@property (retain, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) BOOL hasChannelIdentifier;
@property (retain, nonatomic) NSString *channelIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasClientPayload;
@property (retain, nonatomic) NSData *clientPayload;

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
