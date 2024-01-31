@class NWPBHostEndpoint, NWPBServiceEndpoint, NWPBInterface, NSData, NWPBAddressEndpoint;

@interface NWPBEndpoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) NWPBAddressEndpoint *address;
@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NWPBHostEndpoint *host;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NWPBServiceEndpoint *service;
@property (readonly, nonatomic) BOOL hasInterface;
@property (retain, nonatomic) NWPBInterface *interface;
@property (readonly, nonatomic) BOOL hasTxtRecord;
@property (retain, nonatomic) NSData *txtRecord;

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
