@class NSString;

@interface _MRGroupSessionInfoProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *hostDisplayName;
@property (nonatomic) int routeType;
@property (nonatomic) BOOL hosted;

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
- (int)StringAsRouteType:(id)a0;
- (id)routeTypeAsString:(int)a0;

@end
