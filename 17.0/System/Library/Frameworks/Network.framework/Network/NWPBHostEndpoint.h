@class NSString;

@interface NWPBHostEndpoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHostname;
@property (retain, nonatomic) NSString *hostname;
@property (readonly, nonatomic) BOOL hasPort;
@property (retain, nonatomic) NSString *port;

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
