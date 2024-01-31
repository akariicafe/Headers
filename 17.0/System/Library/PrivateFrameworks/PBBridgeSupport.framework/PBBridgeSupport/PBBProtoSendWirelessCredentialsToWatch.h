@class NSMutableArray;

@interface PBBProtoSendWirelessCredentialsToWatch : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *serializedNetworkRecords;

+ (Class)serializedNetworkRecordType;

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
- (id)serializedNetworkRecordAtIndex:(unsigned long long)a0;
- (void)addSerializedNetworkRecord:(id)a0;
- (void)clearSerializedNetworkRecords;
- (unsigned long long)serializedNetworkRecordsCount;

@end
