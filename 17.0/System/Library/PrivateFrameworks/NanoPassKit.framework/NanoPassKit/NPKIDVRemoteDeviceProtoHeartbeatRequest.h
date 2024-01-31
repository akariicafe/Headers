@class NSMutableArray;

@interface NPKIDVRemoteDeviceProtoHeartbeatRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *inProgressResponseIdentifiers;

+ (Class)inProgressResponseIdentifiersType;

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
- (void)addInProgressResponseIdentifiers:(id)a0;
- (void)clearInProgressResponseIdentifiers;
- (id)inProgressResponseIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)inProgressResponseIdentifiersCount;

@end
