@class NSString, NSSUsageSize;

@interface NSSUsageRespMsgSizeCategory : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasCategoryIdentifier;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (readonly, nonatomic) BOOL hasSize;
@property (retain, nonatomic) NSSUsageSize *size;

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
