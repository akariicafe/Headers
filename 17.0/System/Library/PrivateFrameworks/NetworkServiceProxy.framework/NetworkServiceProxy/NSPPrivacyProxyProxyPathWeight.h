@interface NSPPrivacyProxyProxyPathWeight : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _proxies;
}

@property (nonatomic) unsigned int weight;
@property (readonly, nonatomic) unsigned long long proxiesCount;
@property (readonly, nonatomic) unsigned int *proxies;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)setProxies:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (unsigned int)proxiesAtIndex:(unsigned long long)a0;
- (void)addProxies:(unsigned int)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)clearProxies;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
