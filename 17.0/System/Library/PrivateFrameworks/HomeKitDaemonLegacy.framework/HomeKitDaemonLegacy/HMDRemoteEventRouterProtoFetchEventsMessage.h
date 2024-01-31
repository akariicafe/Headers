@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)topicsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTopics;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
