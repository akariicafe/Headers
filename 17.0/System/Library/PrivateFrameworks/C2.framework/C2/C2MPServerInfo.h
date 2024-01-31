@class NSString;

@interface C2MPServerInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasPartition;
@property (retain, nonatomic) NSString *partition;
@property (readonly, nonatomic) BOOL hasServiceBuild;
@property (retain, nonatomic) NSString *serviceBuild;
@property (readonly, nonatomic) BOOL hasServiceInstance;
@property (retain, nonatomic) NSString *serviceInstance;

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
