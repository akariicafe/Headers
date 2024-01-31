@class NSString;

@interface BCSUrlPattern : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;

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
