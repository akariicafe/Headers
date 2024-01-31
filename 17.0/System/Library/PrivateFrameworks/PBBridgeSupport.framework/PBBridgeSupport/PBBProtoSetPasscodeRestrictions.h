@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying> {
    struct { unsigned char wristDetectionDisabled : 1; } _has;
}

@property (retain, nonatomic) NSData *restrictions;
@property (nonatomic) BOOL hasWristDetectionDisabled;
@property (nonatomic) BOOL wristDetectionDisabled;

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
