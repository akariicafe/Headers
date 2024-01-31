@class NSData;

@interface NPKProtoSecureElementGetPairingInfoResponse : PBCodable <NSCopying> {
    struct { unsigned char authRandomSet : 1; unsigned char pending : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL hasCryptogram;
@property (retain, nonatomic) NSData *cryptogram;
@property (readonly, nonatomic) BOOL hasChallengeResponse;
@property (retain, nonatomic) NSData *challengeResponse;
@property (nonatomic) BOOL hasAuthRandomSet;
@property (nonatomic) BOOL authRandomSet;

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
