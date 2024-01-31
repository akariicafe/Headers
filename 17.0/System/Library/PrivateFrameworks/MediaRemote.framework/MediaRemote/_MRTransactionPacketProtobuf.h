@class NSData, _MRTransactionKeyProtobuf, NSString;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {
    struct { unsigned char totalLength : 1; unsigned char totalWritePosition : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) _MRTransactionKeyProtobuf *key;
@property (readonly, nonatomic) BOOL hasPacketData;
@property (retain, nonatomic) NSData *packetData;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasTotalLength;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) BOOL hasTotalWritePosition;
@property (nonatomic) unsigned long long totalWritePosition;

+ (void)initialize;

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
- (id)customDictionaryRepresentation;

@end
