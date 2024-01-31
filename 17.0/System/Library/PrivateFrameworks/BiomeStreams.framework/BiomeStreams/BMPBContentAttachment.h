@class NSString;

@interface BMPBContentAttachment : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasFilename;
@property (retain, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) NSString *path;

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
