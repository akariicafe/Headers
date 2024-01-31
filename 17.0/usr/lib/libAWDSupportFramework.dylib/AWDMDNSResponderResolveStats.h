@class NSMutableArray;

@interface AWDMDNSResponderResolveStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)serverType;
+ (Class)domainType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)addDomain:(id)a0;
- (void)copyTo:(id)a0;
- (void)addServer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearDomains;
- (unsigned long long)domainsCount;
- (void)clearServers;
- (id)domainAtIndex:(unsigned long long)a0;
- (id)serverAtIndex:(unsigned long long)a0;
- (unsigned long long)serversCount;

@end
