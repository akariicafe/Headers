@class NSString, NSData;

@interface ChannelIdentity : PBCodable <NSCopying> {
    struct { unsigned char channelOwnershipType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasChannelTopic;
@property (retain, nonatomic) NSString *channelTopic;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSData *channelId;
@property (readonly, nonatomic) BOOL hasChannelToken;
@property (retain, nonatomic) NSData *channelToken;
@property (nonatomic) BOOL hasChannelOwnershipType;
@property (nonatomic) int channelOwnershipType;

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
- (int)StringAsChannelOwnershipType:(id)a0;
- (id)channelOwnershipTypeAsString:(int)a0;

@end
