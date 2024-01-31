@interface IDSQRProtoPluginControlIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (nonatomic) unsigned int pluginOperation;
@property (nonatomic) unsigned long long pluginParticipantId;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
