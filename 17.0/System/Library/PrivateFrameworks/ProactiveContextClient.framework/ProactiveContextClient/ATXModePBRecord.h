@class NSString, NSMutableArray;

@interface ATXModePBRecord : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char timezone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) int timezone;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)eventsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addEvents:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearEvents;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
