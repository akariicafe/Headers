@class NSMutableArray;

@interface HMDRemoteEventRouterProtoEventsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *cachedEvents;

+ (Class)eventsType;
+ (Class)cachedEventsType;

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
- (void)addCachedEvents:(id)a0;
- (id)cachedEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedEventsCount;
- (void)clearCachedEvents;

@end
