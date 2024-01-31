@class NSString, NSMutableArray;

@interface NSPPrivacyProxyProxiedContentMap : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _proxies;
    struct { unsigned char percentEnabled : 1; unsigned char resolver : 1; unsigned char supportsReverseProxying : 1; unsigned char systemProcessOnly : 1; } _has;
}

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long proxiesCount;
@property (readonly, nonatomic) unsigned int *proxies;
@property (retain, nonatomic) NSMutableArray *hostnames;
@property (retain, nonatomic) NSMutableArray *processes;
@property (nonatomic) BOOL hasSystemProcessOnly;
@property (nonatomic) BOOL systemProcessOnly;
@property (nonatomic) BOOL hasPercentEnabled;
@property (nonatomic) unsigned int percentEnabled;
@property (nonatomic) BOOL hasSupportsReverseProxying;
@property (nonatomic) BOOL supportsReverseProxying;
@property (retain, nonatomic) NSMutableArray *urls;
@property (nonatomic) BOOL hasResolver;
@property (nonatomic) unsigned int resolver;

+ (Class)hostnamesType;
+ (Class)processesType;
+ (Class)urlsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)setProxies:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (unsigned int)proxiesAtIndex:(unsigned long long)a0;
- (void)addProxies:(unsigned int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)clearProxies;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearUrls;
- (unsigned long long)urlsCount;
- (void)addUrls:(id)a0;
- (id)urlsAtIndex:(unsigned long long)a0;
- (void)addHostnames:(id)a0;
- (void)addProcesses:(id)a0;
- (void)clearHostnames;
- (void)clearProcesses;
- (id)hostnamesAtIndex:(unsigned long long)a0;
- (unsigned long long)hostnamesCount;
- (id)processesAtIndex:(unsigned long long)a0;
- (unsigned long long)processesCount;

@end
