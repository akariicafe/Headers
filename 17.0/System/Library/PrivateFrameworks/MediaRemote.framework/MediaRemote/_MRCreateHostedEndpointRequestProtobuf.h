@class NSMutableArray;

@interface _MRCreateHostedEndpointRequestProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDeviceUIDs;

+ (Class)outputDeviceUIDsType;

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
- (void)addOutputDeviceUIDs:(id)a0;
- (void)clearOutputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDeviceUIDsCount;

@end
