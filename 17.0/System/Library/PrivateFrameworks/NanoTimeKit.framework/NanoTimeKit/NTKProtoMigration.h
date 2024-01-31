@class NSString;

@interface NTKProtoMigration : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFrom;
@property (retain, nonatomic) NSString *from;
@property (readonly, nonatomic) BOOL hasTo;
@property (retain, nonatomic) NSString *to;

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
