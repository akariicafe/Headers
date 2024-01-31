@class NSString;

@interface SPProtoAudioFileQueuePlayerSetRate : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) float rate;

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
- (id)sockPuppetMessage;

@end
