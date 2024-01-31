@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char state : 1; unsigned char status : 1; unsigned char isRetrying : 1; unsigned char isUsingSystemPairing : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPairingData;
@property (retain, nonatomic) NSData *pairingData;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasIsRetrying;
@property (nonatomic) BOOL isRetrying;
@property (nonatomic) BOOL hasIsUsingSystemPairing;
@property (nonatomic) BOOL isUsingSystemPairing;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;

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
