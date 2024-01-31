@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)domainsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(id)a0;
- (void)clearDomains;
- (unsigned long long)domainsCount;

@end
