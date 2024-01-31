@class NSString, NSMutableArray;

@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying> {
    struct { unsigned char protocolVersion : 1; unsigned char shouldAdvertise : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL hasShouldAdvertise;
@property (nonatomic) BOOL shouldAdvertise;
@property (retain, nonatomic) NSMutableArray *knownManifestHashes;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;

+ (Class)knownManifestHashesType;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addKnownManifestHashes:(id)a0;
- (void)clearKnownManifestHashes;
- (id)knownManifestHashesAtIndex:(unsigned long long)a0;
- (unsigned long long)knownManifestHashesCount;

@end
