@class NSString, NSData;

@interface BMPBSiriIntentEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIntentId;
@property (retain, nonatomic) NSString *intentId;
@property (readonly, nonatomic) BOOL hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL hasEventData;
@property (retain, nonatomic) NSData *eventData;

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
