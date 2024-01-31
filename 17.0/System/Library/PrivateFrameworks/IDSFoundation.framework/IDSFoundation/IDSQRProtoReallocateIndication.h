@class NSData, NSString;

@interface IDSQRProtoReallocateIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (retain, nonatomic) NSData *reallocateToken;
@property (retain, nonatomic) NSData *sessionId;
@property (retain, nonatomic) NSString *clientAddress;
@property (retain, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (retain, nonatomic) NSData *serverBlob;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

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
