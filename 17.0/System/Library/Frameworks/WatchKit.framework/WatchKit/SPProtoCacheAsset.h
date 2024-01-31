@class NSString;

@interface SPProtoCacheAsset : PBCodable <NSCopying>

@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double accessDate;

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
