@class NSData, NSString;

@interface NPKProtoSignDataRequest : PBRequest <NSCopying> {
    struct { unsigned char entanglementMode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDataToSign;
@property (retain, nonatomic) NSData *dataToSign;
@property (readonly, nonatomic) BOOL hasDigestToSign;
@property (retain, nonatomic) NSData *digestToSign;
@property (nonatomic) BOOL hasEntanglementMode;
@property (nonatomic) int entanglementMode;
@property (readonly, nonatomic) BOOL hasAid;
@property (retain, nonatomic) NSString *aid;

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
- (int)StringAsEntanglementMode:(id)a0;
- (id)entanglementModeAsString:(int)a0;

@end
