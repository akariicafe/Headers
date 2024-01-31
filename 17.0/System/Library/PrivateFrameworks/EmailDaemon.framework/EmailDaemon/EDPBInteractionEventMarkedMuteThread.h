@interface EDPBInteractionEventMarkedMuteThread : PBCodable <EDPBDataSetters, NSCopying> {
    struct { unsigned char conversationId : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL value;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)withHasher:(id)a0 setConversationID:(long long)a1 data:(id)a2;

@end
