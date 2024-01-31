@class NSString, NSMutableArray;

@interface AWDMDNSResponderResolveStatsDomain : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *hostnames;

+ (Class)hostnameType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearHostnames;
- (unsigned long long)hostnamesCount;
- (void)addHostname:(id)a0;
- (id)hostnameAtIndex:(unsigned long long)a0;

@end
