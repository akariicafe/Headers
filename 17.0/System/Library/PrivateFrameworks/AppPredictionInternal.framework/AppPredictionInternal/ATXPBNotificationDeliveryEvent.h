@class NSMutableArray;

@interface ATXPBNotificationDeliveryEvent : PBCodable <NSCopying> {
    struct { unsigned char deliveryUI : 1; } _has;
}

@property (nonatomic) BOOL hasDeliveryUI;
@property (nonatomic) int deliveryUI;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;

+ (Class)suggestionUUIDType;

- (id)deliveryUIAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)suggestionUUIDAtIndex:(unsigned long long)a0;
- (void)addSuggestionUUID:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)clearSuggestionUUIDs;
- (void)copyTo:(id)a0;
- (int)StringAsDeliveryUI:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)suggestionUUIDsCount;

@end
