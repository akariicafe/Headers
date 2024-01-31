@class BMPBPersonEntity, BMPBTopicEntity;

@interface BMPBEntity : PBCodable <NSCopying> {
    struct { unsigned char entityType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPersonEntity;
@property (retain, nonatomic) BMPBPersonEntity *personEntity;
@property (readonly, nonatomic) BOOL hasTopicEntity;
@property (retain, nonatomic) BMPBTopicEntity *topicEntity;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) int entityType;

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
- (int)StringAsEntityType:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (void)clearOneofValuesForEntityType;

@end
